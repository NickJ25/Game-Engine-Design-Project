#pragma once
#include "Spawner.h"

template <class T>
class SpawnerFor : public Spawner
{
public:
	virtual Item* createItem();
};