#include "TownState.h"

using namespace std;

TownState::TownState()
{
}

void TownState::handle(Area* area)
{
	int choice = 0;
	cout << "You are in town, where do you want to go?" <<
		"\n (1) Go to Shops" <<
		"\n (2) Go to Questboard" <<
		"\n (3) Go to Arena" << endl;
	cin >> choice;
	switch (choice) {
	case(1):
		area->setCurrent(area->getShopState());
		area->getCurrentState()->handle(area);
	}
	
}