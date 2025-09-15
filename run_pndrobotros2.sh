#!/bin/bash
set -euo pipefail

# 用法提示
usage() {
    echo "用法: $0 [real|mujoco]"
    echo "  real    在真实机器人环境运行（启用 ABS 检查）"
    echo "  mujoco  在 MuJoCo 仿真环境运行（跳过 ABS 检查）"
    echo "  不输入参数时默认使用 real 模式"
    exit 1
}

# 如果没有提供参数，默认使用 real 模式
MODE=${1:-real}

if [[ "$MODE" != "real" && "$MODE" != "mujoco" ]]; then
    echo "❌ 无效参数: $MODE"
    usage
fi

# === 设置 ROS 环境 ===
# 临时禁用未绑定变量检查，以避免 ROS 环境设置中的未定义变量
set +u
source /opt/ros/humble/setup.bash
set -u

SCRIPT_DIR="$(cd "$(dirname "$0")" && pwd)"
set +u
source "$SCRIPT_DIR/install/setup.bash"
set -u
export ROS_LOCALHOST_ONLY=1

# 保存原始工作目录
ORIGINAL_DIR=$(pwd)

# 确保在脚本退出时恢复原始目录
cleanup() {
    cd "$ORIGINAL_DIR"
}
trap cleanup EXIT

if [ "$MODE" = "mujoco" ]; then
    # ========================
    # MuJoCo 模式：不做 ABS 检查
    # ========================
    cd "$SCRIPT_DIR/install/pndrobotros2/bin/python_scripts" || exit 1
    echo "Starting pndrobotros2_node in background..."

    # 返回到原始目录运行节点
    cd "$ORIGINAL_DIR" || exit 1
    ros2 run pndrobotros2 pndrobotros2_node
    echo "Script completed."

elif [ "$MODE" = "real" ]; then
    # ========================
    # Real 模式：执行 ABS 检查
    # ========================
    cd "$SCRIPT_DIR/install/pndrobotros2/bin/python_scripts" || exit 1
    python3 read_abs.py
    result=$(python3 check_abs.py)

    if [[ "$result" == "True" ]]; then
        echo "check_abs.py returned True. Starting pndrobotros2_node in background..."

        # 返回到原始目录运行节点
        cd "$ORIGINAL_DIR" || exit 1
        ros2 run pndrobotros2 pndrobotros2_node
        echo "Script completed."
    else
        echo "ABS not complete, retry."
        exit 1
    fi
fi
