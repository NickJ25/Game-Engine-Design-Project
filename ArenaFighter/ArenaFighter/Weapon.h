#pragma once
#include "Item.h"

class Weapon : public Item {
	int damage;
	
public:
	virtual ~Weapon() {} // for spawner
	virtual void equip() = 0;
};