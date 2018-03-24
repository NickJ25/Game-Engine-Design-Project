#pragma once
#include "Item.h"

class Armour : public Item {
	int armour;
public:
	virtual ~Armour() {} // for spawner
	virtual void equip() = 0;
};