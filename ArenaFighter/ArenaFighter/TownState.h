#pragma once
#include "AreaState.h"
#include "Area.h"

class TownState : public AreaState
{
public:
	TownState();
	virtual ~TownState() {};
	void handle(Area* area);
};