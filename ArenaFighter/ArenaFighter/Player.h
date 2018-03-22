#pragma once

class Player {
private:
	int health;
	int gold;

public:
	Player(int startingHealth, int startingGold) : health(startingHealth), gold(startingGold) {}
	virtual ~Player() {}

	int getGold();
	void addGold(int amount);
	void removeGold(int amount);

	int getHealth();
	void addHealth(int amount);
	void removeHealth(int amount);
};