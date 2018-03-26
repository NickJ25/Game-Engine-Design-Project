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
		"\n (2) Buy Weapon" <<
		"\n (3) Buy Armour" << endl;

	switch (choice) {
	case 1:
	cin >> choice;
	{
		// Back to Town
		area->setCurrent(area->getTownState());
		area->getCurrentState()->handle(area);
		break;
	}
	case 2:
	{
		// Creates an Iron Sword
		Spawner* itemCreator = new SpawnerFor<IronSword>();
		Item* item = itemCreator->createItem();
		area->setCurrent(area->getTownState());
		area->getCurrentState()->handle(area);
		break;
	}
	case 3:
	{
		// Creates Leather Armour
		Spawner * itemCreator = new SpawnerFor<LeatherArmour>();
		Item* item = itemCreator->createItem();
		area->setCurrent(area->getTownState());
		area->getCurrentState()->handle(area);
		break;
	}

	}


}