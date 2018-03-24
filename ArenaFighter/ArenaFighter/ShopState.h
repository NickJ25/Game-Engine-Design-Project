#pragma once
#include "AreaState.h"
#include "Area.h"
#include "Spawner.h"
#include "SpawnerFor.h"

#include "IronSword.h"
#include "LeatherArmour.h"

class ShopState : public AreaState
{
public:
	ShopState();
	virtual ~ShopState() {};
	void handle(Area* area);
};