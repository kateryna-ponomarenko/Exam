#pragma once
#include <iostream>
#include "IWeapon.h"
#include "Wave.h"
class Tower
{
private:
	std::string name;

public:
	Tower(std::string name, IWeapon* weapon) : name(name),  {}
};

