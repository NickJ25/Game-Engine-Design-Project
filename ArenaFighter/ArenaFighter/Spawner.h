#pragma once
#include "Item.h"

class Spawner
{
public:
	virtual ~Spawner() {}
	virtual Item* createItem() = 0;
};