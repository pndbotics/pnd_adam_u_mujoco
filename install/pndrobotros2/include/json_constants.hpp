#pragma once

#include <string>

const std::string JOINT_ABS_CONFIG_PATH = "/root/.adam/joint_abs_config.json";

// joints_info.json节点名
// 一级节点
const std::string JOINTS = "joints";

// 二级节点
const std::string JOINTS_IP = "ip";
const std::string JOINTS_NAME = "name";
const std::string JOINTS_JOINT_DIR = "joint_dir";
const std::string JOINTS_JOINT_GEAR_RATIO = "joint_gear_ratio";
const std::string JOINTS_C_T_SCALE = "c_t_scale";
const std::string JOINTS_ZERO_POS = "zero_pos";
const std::string JOINTS_DEFAULT_DOF_POS = "default_dof_pos";
const std::string JOINTS_KD_SCALE = "kd_scale";
const std::string JOINTS_JOINT_MAX_CURRENT = "joint_max_current";
const std::string JOINTS_ABS_POS_GEAR_RATIO = "abs_pos_gear_ratio";
const std::string JOINTS_ABS_POS_ZERO = "abs_pos_zero";
const std::string JOINTS_ABS_POS_DIR = "abs_pos_dir";
