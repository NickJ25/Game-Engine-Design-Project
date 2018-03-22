#pragma once
#include "Weapon.h"

class Spawner
{
public:
	virtual ~Spawner() {}
	virtual Weapon* createWeapon() = 0;
};