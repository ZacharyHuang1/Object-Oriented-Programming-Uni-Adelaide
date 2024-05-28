#include <iostream>
#include "Game.h"

int main() {
    Game game;
    
    // Initialize the game with 3 ships, 2 mines, and a 50x50 grid
    std::vector<GameEntity*> entities = game.initGame(3, 2, 50, 50);
    
    // Print initial positions and types of all entities
    for (auto entity : entities) {
        std::cout << "Entity Position: (" << std::get<0>(entity->getPos()) << ", " << std::get<1>(entity->getPos()) << ") Type: " << entity->getType() << std::endl;
    }

    // Run the game loop with a maximum of 10 iterations and a mine distance threshold of 2.0
    game.gameLoop(10, 2.0);

    // Print final positions and types of all entities
    for (auto entity : entities) {
        std::cout << "Entity Position: (" << std::get<0>(entity->getPos()) << ", " << std::get<1>(entity->getPos()) << ") Type: " << entity->getType() << std::endl;
    }

    return 0;
}
