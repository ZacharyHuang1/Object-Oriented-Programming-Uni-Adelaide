#ifndef GAMEENTITY_H
#define GAMEENTITY_H

#include <tuple>

class GameEntity {
public:
    GameEntity(int x, int y, char type) : position(x, y), type(type) {}

    std::tuple<int, int> getPos() const {
        return position;
    }

    char getType() const {
        return type;
    }

    virtual ~GameEntity() {} 

protected:
    std::tuple<int, int> position;
    char type;
};

#endif



