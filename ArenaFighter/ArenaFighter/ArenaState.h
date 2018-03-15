#pragma once
#include "AreaState.h"
#include "Area.h"

class ArenaState : public AreaState
{
public:
	ArenaState();
	virtual ~ArenaState() {};
	void handle(Area* area);
};