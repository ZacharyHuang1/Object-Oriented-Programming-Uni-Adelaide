#ifndef GAME_H
#define GAME_H

#include <vector>
#include <iostream>
#include "GameEntity.h"
#include "Ship.h"
#include "Mine.h"
#include "Utils.h"

class Game {
public:
    std::vector<GameEntity*> get_entities() const {
        return entities;
    }

    void set_entities(const std::vector<GameEntity*>& new_entities) {
        entities = new_entities;
    }

    std::vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth, int gridHeight) {
        entities.clear();

        for (int i = 0; i < numShips; ++i) {
            auto pos = Utils::generateRandomPos(gridWidth, gridHeight);
            entities.push_back(new Ship(std::get<0>(pos), std::get<1>(pos)));
        }

        for (int i = 0; i < numMines; ++i) {
            auto pos = Utils::generateRandomPos(gridWidth, gridHeight);
            entities.push_back(new Mine(std::get<0>(pos), std::get<1>(pos)));
        }

        return entities;
    }

    void gameLoop(int maxIterations, double mineDistanceThreshold) {
        for (int iter = 0; iter < maxIterations; ++iter) {
            // Move all ships
            for (auto entity : entities) {
                if (Ship* ship = dynamic_cast<Ship*>(entity)) {
                    ship->move(1, 0);
                }
            }

            // Check for collisions between ships and mines
            for (auto entity : entities) {
                if (Ship* ship = dynamic_cast<Ship*>(entity)) {
                    for (auto other : entities) {
                        if (Mine* mine = dynamic_cast<Mine*>(other)) {
                            double distance = Utils::calculateDistance(ship->getPos(), mine->getPos());
                            if (distance <= mineDistanceThreshold) {
                                Explosion explosion = mine->explode();
                                explosion.apply(*ship);
                            }
                        }
                    }
                }
            }

            // Check if all ships are destroyed
            bool allShipsDestroyed = true;
            for (auto entity : entities) {
                if (Ship* ship = dynamic_cast<Ship*>(entity)) {
                    if (ship->getType() != 'X') {
                        allShipsDestroyed = false;
                        break;
                    }
                }
            }

            if (allShipsDestroyed) {
                std::cout << "All ships have been destroyed." << std::endl;
                break;
            }
        }
    }

    ~Game() {
        for (auto entity : entities) {
            delete entity;
        }
    }

private:
    std::vector<GameEntity*> entities;
};

#endif

