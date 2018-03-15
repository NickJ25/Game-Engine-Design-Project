#pragma once

class Area;

class AreaState
{
public:
	virtual ~AreaState() {};
	virtual void handle(Area* area) = 0;
};