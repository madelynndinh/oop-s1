#ifndef SHIP_H
#define  SHIP_H

#include "GameEntity.h"

class Ship:public GameEntity
{
private:
    /* data */
public:
    Ship(int x, int y): GameEntity(x, y,'S'){};
     void move(int dx, int dy){
        setPos(get<0>(getPos()) + dx, get<1>(getPos()) + dy);}
     
};


#endif