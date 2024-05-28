#ifndef GAMEENTITY_H
#define GAMEENTITY_H
#include <iostream>
#include <tuple>

using namespace std;
class GameEntity
{
protected:
    std::tuple<int, int> position; //(representing the position of the entity)
    char type ;//(representing the type of the entity)
    
public:
GameEntity(int x, int y,char type)
{   this->position = std::make_tuple(x,y);
    this->type =type ;};

 virtual ~GameEntity(){};

    void setPos(int x, int y)
    {
        position = make_tuple(x, y);
    };
    
    std::tuple<int, int> getPos()
    {
        return this->position;
    }; //Returns the position of the entity.
    void setType(char type)
    {
        type = type;
    };
char getType() //Returns the type of the entity.
{
return this->type;
};

};

#endif