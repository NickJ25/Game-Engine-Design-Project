#pragma once
#include "AreaState.h"
#include "Area.h"

class QuestboardState : public AreaState
{
public:
	QuestboardState();
	virtual ~QuestboardState() {};
	void handle(Area* area);
};