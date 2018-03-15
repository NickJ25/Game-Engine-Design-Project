#pragma once
#include "AreaState.h"
#include "Area.h"

class BattleState : public AreaState
{
public:
	BattleState();
	virtual ~BattleState() {};
	void handle(Area* area);
};