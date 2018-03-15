#include "Area.h"
#include "TownState.h"
#include "ShopState.h"
#include "ArenaState.h"
#include "QuestboardState.h"
#include "BattleState.h"

#include <iostream>

using namespace std;

Area::Area()
{
	townState = new TownState();
	shopState = new ShopState();
	arenaState = new ArenaState();
	questboardState = new QuestboardState();
	battleState = new BattleState();
	current = townState;
	current ->handle(this);
}

void Area::setCurrent(AreaState* state)
{
	current = state;
}

AreaState * Area::getCurrentState()
{
	return current;
}

AreaState * Area::getBattleState()
{
	return battleState;
}

AreaState * Area::getQuestboardState()
{
	return questboardState;
}

AreaState * Area::getArenaState()
{
	return arenaState;
}

AreaState * Area::getShopState()
{
	return shopState;
}

AreaState * Area::getTownState()
{
	return townState;
}



