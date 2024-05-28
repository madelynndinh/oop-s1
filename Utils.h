#ifndef UTILS_H
#define UTILS_H
#include <iostream>
#include <tuple>
#include <cmath>
using namespace std;
class Utils {
 private:
  /* data */
 public:
  Utils(/* args */){};
  static std::tuple<int, int> generateRandomPos(int gridWidth, int gridHeight) {
    std::tuple<int, int> pos = {rand() % gridWidth, rand() % gridHeight};
    return pos;
  };
  static double calculateDistance(std::tuple<int, int> pos1,
                                  std::tuple<int, int> pos2) {
    double distance = pow((get<0>(pos2) - get<0>(pos1)), 2) +
                      pow((get<1>(pos2) - get<1>(pos1)), 2);
    return distance;
  };
};

#endif
