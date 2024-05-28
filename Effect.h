#ifndef EFFECT_H
#define EFFECT_H
#include "GameEntity.h"
#include <iostream>
#include <tuple>

using namespace std;
class Effect
{
private:
    /* data */
public:
    Effect(/* args */){};
    ~Effect(){};
    //Accepts a GameEntity object as input and applies the effect to the entity. This function is pure virtual and needs to be implemented in derived classes.
    virtual void apply(GameEntity& entity)=0;
};



#endif