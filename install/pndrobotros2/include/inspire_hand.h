#pragma once

#include <arpa/inet.h>
#include <atomic>
#include <condition_variable>
#include <cstring>
#include <map>
#include <mutex>
#include <netinet/in.h>
#include <string>
#include <sys/socket.h>
#include <thread>
#include <unistd.h>
#include <vector>

class Inspire_HandController {
private:
  enum class HandSide { Left = 0, Right = 1 };

public:
  Inspire_HandController(const std::vector<int> &values);
  ~Inspire_HandController();

  void updateHandControlValues(const std::vector<int> &values);

private:
  void start();
  void stop();
  void setNonBlocking(int sockfd);
  sockaddr_in createSockaddr(const char *addr);

  void handThread(HandSide side);

  void writeRegister(int sock, const char *addr, int id, int add, int num,
                     const std::vector<uint8_t> &val, std::mutex &mutex);
  std::vector<uint8_t> readRegister(int sock, const char *addr, int id, int add,
                                    int num, std::mutex &mutex);

  void write6(int sock, const char *addr, int id, const std::string &reg,
              const std::vector<int> &val, std::mutex &mutex);
  std::vector<int> read6(int sock, const char *addr, int id,
                         const std::string &reg, std::mutex &mutex);

private:
  static constexpr int port_ = 2562;
  static constexpr const char *addr_l_ = "10.10.10.18";
  static constexpr const char *addr_r_ = "10.10.10.38";

  int sok_l_ = -1;
  int sok_r_ = -1;

  std::atomic<bool> running_{false};

  std::thread hand_threads_[2]; // Left, Right
  std::mutex comm_mutex_[2];    // for sendto/recv per side
  std::mutex value_mutex_[2];   // for updating control values
  std::condition_variable cvs_[2];
  bool updated_flags_[2] = {false, false};

  std::vector<int> hand_values_[2]; // Left and Right hand positions
  std::vector<int> val_act;         // latest actual values (shared buffer)

  std::map<std::string, int> regdict_ = {
      {"ID", 1000},        {"baudrate", 1001},   {"clearErr", 1004},
      {"forceClb", 1009},  {"angleSet", 1486},   {"forceSet", 1498},
      {"speedSet", 1522},  {"angleAct", 1546},   {"forceAct", 1582},
      {"errCode", 1606},   {"statusCode", 1612}, {"temp", 1618},
      {"actionSeq", 2320}, {"actionRun", 2322}};
};
