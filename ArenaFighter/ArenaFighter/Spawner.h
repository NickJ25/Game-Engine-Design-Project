#pragma once
//#include "Weapon.h"
#include "Item.h"

class Spawner
{
public:
	virtual ~Spawner() {}
	//virtual Weapon* createWeapon() = 0;
	virtual Item* createItem() = 0;
};