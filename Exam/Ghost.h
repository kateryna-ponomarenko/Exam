#pragma once
#include "Enemy.h"
class Ghost :
    public Enemy
{

public:
    Ghost(std::string name, int hp);

    //Ghost takeHit: real damage = damage / 2 (integer division)
    void takeHit(int damage) override
    {
        int realDamage = damage / 2;
        Enemy::hp -= realDamage;

        std::cout << "hp: " << hp << std::endl;
    }
};

