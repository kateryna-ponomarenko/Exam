#pragma once
#include "Orc.h"
#include "Ghost.h"
#include "Enemy.h"
#include <vector>
class Wave
{
private:
	
	//vector<unique_ptr<Enemy>> enemys;
public:

	

	void addOrc(std::string name, int hp)
	{
		Enemy orc(name, hp);
	}

	void addGhost(std::string name, int hp)
	{
		Enemy ghost(name, hp);
	}


	void hitAll(int damage)
	{
		while (aliveCount() > 0)
		{
			//for (enemy in enemys)
			//{
			//	Enemy::takeHit(damage);
			//}
		}
		
	}

	int aliveCount()
	{
		//enemys.count()
	}
};

