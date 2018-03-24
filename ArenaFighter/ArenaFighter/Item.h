#pragma once
#include <iostream>

using namespace std;

class Item {
protected:
	string name;
	string description;
	string type;
	int cost;

public:
	virtual ~Item() {};
	virtual void equip() = 0;
	int getCost();
	string getName();
	string getDescription();
	string getType();


};