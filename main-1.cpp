#include <iostream>
#include <tuple>
#include "GameEntity.h"
#include "Effect.h"
#include "Utils.h"

int main() {
    srand(time(0)); // Initialize random number generator

    // Generate random positions
    auto pos1 = Utils::generateRandomPos(100, 100);
    auto pos2 = Utils::generateRandomPos(100, 100);

    // Print positions
    std::cout << "Position 1: (" << std::get<0>(pos1) << ", " << std::get<1>(pos1) << ")" << std::endl;
    std::cout << "Position 2: (" << std::get<0>(pos2) << ", " << std::get<1>(pos2) << ")" << std::endl;

    // Calculate and print distance between positions
    double distance = Utils::calculateDistance(pos1, pos2);
    std::cout << "Distance between positions: " << distance << std::endl;

    return 0;
}
