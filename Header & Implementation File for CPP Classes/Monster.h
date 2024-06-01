#pragma once
class Monster
{
public:
	Monster(int hp);
	int getHp();
	void takeDamage(int amount);
private:
	int mHp;
};

