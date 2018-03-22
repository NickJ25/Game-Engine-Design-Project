#pragma once
#include "Weapon.h"

class IronSword : public Weapon{

public:
	IronSword()
	{
		name = "Iron Sword";
		type = "Weapon";
		cost = 20;
		description = "An average iron sword";
		cout << "WEAPON CREATED" << endl;
	}
	void equip();
};