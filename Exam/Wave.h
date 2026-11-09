#pragma once
#include "Orc.h"
#include "Ghost.h"
#include "Enemy.h"
#include <vector>

class Wave
{
private:
	
	vector<std::unique_ptr<Enemy>> enemys;
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
			for (enemy in enemys)
			{
				if (enemy.IsAlife())
				{
					Enemy::takeHit(damage);
				}

				else
				{
					std::cout << "dead " << name << std::endl;
				}
				
			}
		}
		
	}

	int aliveCount()
	{
		enemys.count()
	}
};

