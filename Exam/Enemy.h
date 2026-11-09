#pragma once
#include <iostream>

 class Enemy
{
private:
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

	void takeHit() 
	{
	}

};

