
#include "Utils.h"
#include <random>
#include <iostream>
#include <tuple>
#include <cmath>

using namespace std;
int main(int argc, char const *argv[])
{
    Utils utils1;
    Utils utils2;
    int gridWidth = 10;
    int gridHeight = 20;
    std::tuple<int, int> pos1 = utils1.generateRandomPos(gridWidth,gridHeight);
    std::tuple<int, int> pos2 = utils2.generateRandomPos(gridWidth,gridHeight);
    std::cout<<"Pos1: "<<std::get<0>(pos1)<<" "<<std::get<1>(pos1)<<std::endl;
    std::cout<<"Pos2: "<<std::get<0>(pos2)<<" "<<std::get<1>(pos2)<<std::endl;
    std::cout<<"Distance: "<<utils1.calculateDistance(pos1,pos2);
    return 0;
}
