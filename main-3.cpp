#include "Game.h"
#include "GameEntity.h"
#include "Effect.h"
#include "Explosion.h"
#include "Mine.h"
#include "Ship.h"
#include "Utils.h"

using namespace std;

int main(int argc, char const *argv[])
{
    Game game;
    game.initGame(1, 1, 10, 20);
    game.gameLoop(10, 10);
    return 0;
}