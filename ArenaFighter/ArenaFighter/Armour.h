#pragma once
#include "Item.h"

class Armour : public Item {
	int armour;
public:
	virtual void equip() = 0;
};