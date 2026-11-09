#pragma once
#include "IWeapon.h"
class Cannon :
    public IWeapon
{

private:
    int power;
public:
    Cannon(int power);

    int damage() override
    {
		return power;
    }
};

