#pragma once
#include "Armour.h"

class LeatherArmour : public Armour {

public:
	LeatherArmour()
	{
		name = "Iron Sword";
		type = "Armour";
		cost = 20;
		description = "Leather Armour, basic damage protection";
		cout << "ARMOUR CREATED" << endl;
	}
	void equip();
};