#include "Monster.h"

Monster::Monster(int hp) {
	mHp = hp;
}

int Monster::getHp() {
	return mHp;
}

void Monster::takeDamage(int amount) {
	mHp -= amount;

	if (mHp < 0) {

	}
}