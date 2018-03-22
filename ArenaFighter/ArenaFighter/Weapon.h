#pragma once
#include "Item.h"

class Weapon : public Item {
	int damage;
public:
	virtual void equip() = 0;
};