#pragma once
#include "Enemy.h"

class Orc : public Enemy
{

private:
	const int armor = 2;
public:

	Orc(std::string name, int hp);

	void takeHit(int damage) override
	{
		if (hp <= 0)
		{
			std::cout << "dead " << name << std::endl;
			return;
		}


		//Orc takeHit: real damage = damage - armor ,never below 0.
		int realDamage = damage - armor;

		Enemy::hp -= realDamage;
		if (Enemy::hp < 0)
		{
			Enemy::hp = 0; 
		}

		std::cout << "hp: " << hp << std::endl;
	}
};

