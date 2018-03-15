#pragma once

#include "AreaState.h"
#include <iostream>

class Area
{
private:
	AreaState* current;
	AreaState* townState;
	AreaState* questboardState;
	AreaState* arenaState;
	AreaState* battleState;
	AreaState* shopState;
public:
	Area();
	virtual ~Area()
	{
		delete townState;
		delete questboardState;
		delete arenaState;
		delete battleState;
		delete shopState;
	}

	void setCurrent(AreaState* state);
	AreaState* getCurrentState();
	AreaState* getArenaState();
	AreaState* getTownState();
	AreaState* getQuestboardState();
	AreaState* getBattleState();
	AreaState* getShopState();

};