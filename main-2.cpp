#include <iostream>
#include "Ship.h"
#include "Mine.h"
#include "Explosion.h"

int main() {
    // Create Ship and Mine objects
    Ship ship(10, 20);
    Mine mine(15, 25);

    // Print initial positions and types
    std::cout << "Initial Ship Position: (" << std::get<0>(ship.getPos()) << ", " << std::get<1>(ship.getPos()) << ") Type: " << ship.getType() << std::endl;
    std::cout << "Initial Mine Position: (" << std::get<0>(mine.getPos()) << ", " << std::get<1>(mine.getPos()) << ") Type: " << mine.getType() << std::endl;

    // Move the ship
    ship.move(5, -10);
    std::cout << "Moved Ship Position: (" << std::get<0>(ship.getPos()) << ", " << std::get<1>(ship.getPos()) << ") Type: " << ship.getType() << std::endl;

    // Mine explodes
    Explosion explosion = mine.explode();
    std::cout << "Mine After Explosion Position: (" << std::get<0>(mine.getPos()) << ", " << std::get<1>(mine.getPos()) << ") Type: " << mine.getType() << std::endl;
    std::cout << "Explosion Position: (" << std::get<0>(explosion.getPos()) << ", " << std::get<1>(explosion.getPos()) << ") Type: " << explosion.getType() << std::endl;

    // Apply explosion to the ship
    explosion.apply(ship);
    std::cout << "Ship After Explosion Position: (" << std::get<0>(ship.getPos()) << ", " << std::get<1>(ship.getPos()) << ") Type: " << ship.getType() << std::endl;

    return 0;
}
