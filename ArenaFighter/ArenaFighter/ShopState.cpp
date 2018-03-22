#include "ShopState.h"


using namespace std;

ShopState::ShopState()
{
}

void ShopState::handle(Area* area)
{
	int choice = 0;
	cout << "You are in town, where do you want to go?" <<
		"\n (1) Go to Town" <<
		"\n (2) Buy Armour" <<
		"\n (3) Buy Weapon" << endl;
	cin >> choice;
	switch (choice) {
	case(1):
		area->setCurrent(area->getTownState());
		area->getCurrentState()->handle(area);
		break;
	// Use spawner to create item
	}

}