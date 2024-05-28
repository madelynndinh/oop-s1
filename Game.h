#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <vector>

#include "GameEntity.h"
#include "Effect.h"
#include "Explosion.h"
#include "Mine.h"
#include "Ship.h"
#include "Utils.h"


using namespace std;
class Game {
 private:
  std::vector<GameEntity*> entities;
    int numShips;
        int numMines; 
        int gridWidth;
        int gridHeight;
        int maxIterations;
        double mineDistanceThreshold;
 public:
  Game(/* args */);
  ~Game() {
    for (auto entity : entities) {
      delete entity;
    }
    entities.clear();}

  std::vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth,
                                    int gridHeight) {
    entities.clear();
    for (int i = 0; i < numShips; i++) {
      std::tuple<int, int> pos = Utils::generateRandomPos(gridWidth, gridHeight);
      entities.push_back(new Ship(std::get<0>(pos), std::get<1>(pos)));
    }
    for (int i = 0; i < numMines; i++) {
      std::tuple<int, int> pos = Utils::generateRandomPos(gridWidth, gridHeight);
      entities.push_back(new Mine(std::get<0>(pos), std::get<1>(pos)));
    }

    return entities;
  };
  void gameLoop(int maxIterations, double mineDistanceThreshold) {
    int i = 0;
    while (i<maxIterations)
    {
       for (int i = 0; i < entities.size(); i++) {
      if (entities[i]->getType() == 'S') {
        dynamic_cast<Ship*>(entities[i])->move(0, 1);
        for (int j = 0; j < entities.size(); j++) {
          if (entities[j]->getType() == 'M')
          entities[j]=dynamic_cast<Mine*>(entities[j]);
            if (Utils::calculateDistance(entities[i]->getPos(),entities[j]->getPos()) < mineDistanceThreshold)
            {
              Explosion explosion = dynamic_cast<Mine*>(entities[j])->explode();
              explosion.apply(entities[i]);
            }
        }
      }
    }
    bool ship_destroyed = true;
     for (int i = 0; i < entities.size(); i++) {
      if (entities[i]->getType() == 'S') {
        ship_destroyed = false;
        break;}
      if (ship_destroyed==true)
      {
        break;
      }
    }
       i++;
    }
  };
};

#endif