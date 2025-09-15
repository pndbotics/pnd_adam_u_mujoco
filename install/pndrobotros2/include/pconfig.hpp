#ifndef PCONFIG_HPP_
#define PCONFIG_HPP_

#include <Eigen/Dense>
#include <string>
#include <unordered_map>
#include <vector>

class PConfig {
private:
  struct JointConfig {
    std::string ip;
    std::string name;
    int joint_dir;
    double joint_gear_ratio;
    double c_t_scale;
    double zero_pos;
    double default_dof_pos;
    double kd_scale;
    double joint_max_current;
    float abs_pos_gear_ratio;
    float abs_pos_zero;
    float abs_pos_dir;
    float motor_rotor_abs_pos;

    JointConfig(std::string ip, std::string name, int joint_dir,
                double joint_gear_ratio, double c_t_scale, double zero_pos,
                double default_dof_pos, double kd_scale,
                double joint_max_current, float abs_pos_gear_ratio,
                float abs_pos_zero, float abs_pos_dir);
  };

public:
  static PConfig &getInstance();

  // 删除拷贝构造和赋值运算符
  PConfig(const PConfig &) = delete;
  PConfig &operator=(const PConfig &) = delete;

  // 配置加载方法
  void loadConfig(const std::string &configPath);
  void loadJointsInfo(const std::string &jointsInfoPath);
  void validateFilePath(const std::string &file_path);

  // 模型路径获取
  const std::string &modelPbA() const;
  const std::string &modelEstimatorA() const;
  const std::string &modelPb() const;
  const std::string &modelEstimator() const;

  // 配置参数获取
  int obsNum() const;
  int deltaNum() const;
  int otherNum() const;
  int frameStack() const;
  float cycleTimeWalk() const;
  float cycleTimeRun() const;
  float cycleTimeStand() const;
  const std::string &stateName() const;
  const std::string &jointConfigPath() const;
  int latentFrameStack() const;
  int latentSize() const;

  size_t getRobotDof() const { return joint_configs_.size(); }

  // 关节相关方法
  std::vector<std::string> jointNames() const;
  Eigen::VectorXd absolutePosGearRatio() const;
  Eigen::VectorXd absolutePosZero() const;
  Eigen::VectorXd absolutePosDir() const;
  Eigen::VectorXd motorRotorAbsPos() const;
  const Eigen::VectorXd &zeroPos() const;
  const Eigen::VectorXd &defaultDofPos() const;
  const Eigen::VectorXd &kdScale() const;
  Eigen::VectorXd jointMaxCurrent() const;
  std::vector<std::string> ipList() const;
  const Eigen::VectorXi &jointDir() const;
  const Eigen::VectorXd &jointGearRatio() const;
  const Eigen::VectorXd &curTorScale() const;

  // 实用方法
  Eigen::VectorXd zeroPosFromIds(const std::vector<int> &joint_ids) const;
  Eigen::VectorXd defDofPosFromIds(const std::vector<int> &joint_ids) const;
  std::vector<int>
  jointIdFromNames(const std::vector<std::string> &joint_names) const;

  // 演示运行相关
  const std::vector<Eigen::VectorXd> &jointPosMotion() const;

private:
  PConfig();
  void initializeEigenVectors();
  void loadAbsoluteEncoderConfig();

  // 配置数据
  std::string model_pb_a_;
  std::string model_estimator_a_;
  std::string model_pb_;
  std::string model_estimator_;
  int obs_num_;
  int delta_num_;
  int other_num_;
  std::string state_name_;
  int frame_stack_;
  int latent_frame_stack_;
  int latent_size_;
  float cycle_time_walk_;
  float cycle_time_run_;
  float cycle_time_stand_;
  std::string joint_config_path_;

  // 关节配置数据
  std::vector<JointConfig> joint_configs_;
  std::unordered_map<std::string, int> joint_name_idx_map_;

  // Eigen向量
  Eigen::VectorXd zero_pos_;
  Eigen::VectorXd default_dof_pos_;
  Eigen::VectorXd kd_scale_;
  Eigen::VectorXi joint_dir_;
  Eigen::VectorXd joint_gear_ratio_;
  Eigen::VectorXd c_t_scale_;

  // 演示运行相关
  std::vector<Eigen::VectorXd> joint_pos_motion_;
};

#endif // PCONFIG_HPP_
