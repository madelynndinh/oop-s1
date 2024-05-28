#include "GameEntity.h"
#include "Effect.h"
#include "Ship.h"
#include "Explosion.h"
#include "Mine.h"
#include <random>
#include <iostream>
#include <tuple>
#include <cmath>

using namespace std;
int main(int argc, char const *argv[])
{
    //Initilize ship object
    Ship ship(0,0,'S');
    ship.move(5,5);
    std::cout<<"Pos: "<<std::get<0>(ship.getPos())<<" "<<std::get<1>(ship.getPos())<<std::endl;

     //Initilize mine object
    Mine mine(0,0,'M');
    mine.explode();
    std::cout<<"Type: "<<mine.getType()<<std::endl;

    //Initilize explosion object
    Explosion explosion(0,0,'E');
    explosion.apply(ship);
    std::cout<<"Pos: "<<std::get<0>(ship.getPos())<<" "<<std::get<1>(ship.getPos())<<std::endl;
    std::cout<<"Type: "<<ship.getType()<<std::endl;
    return 0;

}