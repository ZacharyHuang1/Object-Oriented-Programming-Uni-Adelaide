#ifndef SHIP_H
#define SHIP_H

#include "GameEntity.h"

class Ship : public GameEntity {
public:
    Ship(int x, int y) : GameEntity(x, y, 'S') {}

    void move(int dx, int dy) {
        int newX = std::get<0>(getPos()) + dx;
        int newY = std::get<1>(getPos()) + dy;
        position = std::make_tuple(newX, newY);
    }
};

#endif

