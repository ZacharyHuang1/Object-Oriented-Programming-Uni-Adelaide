#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
protected:
    std::string name;
    int health;
    int damage;

public:
    Player(std::string name, int health, int damage);

    std::string getName() const;
    int getHealth() const;
    int getDamage() const;

    void setName(const std::string& newName);
    void setHealth(int newHealth);
    void setDamage(int newDamage);

    void attack(Player* opponent, int attackDamage);
    void takeDamage(int damage);
};

#endif