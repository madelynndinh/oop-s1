#ifndef MINE_H
#define MINE_H

#include <iostream>
#include "GameEntity.h"
#include "Explosion.h"
class Mine: public GameEntity
{
private:
    /* data */
public:
    Mine(int x, int y): GameEntity(x, y,'M'){};
    ~Mine(){};
   Explosion explode(){
    setType('X');
    return Explosion(get<0>(getPos()),get<1>(getPos()));
   }
};


#endif