#pragma once
#include <iostream>

 static class Enemy
{
protected:
	std::string name;
	int hp;

public:
	Enemy(std::string name, int hp) : name(name), hp(hp) {}

	std::string getName()
	{
		return name;
	}

	bool isAlive()
	{
		return hp > 0;
	}

	virtual void takeHit(int damage) 
	{
		Enemy::hp -= damage;
		if (Enemy::hp < 0)
		{
			Enemy::hp = 0;
		}

		std::cout << "hp: " << hp << std::endl;
	}

};

