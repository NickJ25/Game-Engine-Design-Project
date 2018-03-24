#pragma once
#include "Spawner.h"

template <class T>
class SpawnerFor : public Spawner
{
//public:
//	virtual Weapon* createWeapon() { return new T(); }
//};

public:
	virtual Item* createItem() { return new T(); }
};