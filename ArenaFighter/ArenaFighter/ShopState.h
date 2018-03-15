#pragma once
#include "AreaState.h"
#include "Area.h"

class ShopState : public AreaState
{
public:
	ShopState();
	virtual ~ShopState() {};
	void handle(Area* area);
};