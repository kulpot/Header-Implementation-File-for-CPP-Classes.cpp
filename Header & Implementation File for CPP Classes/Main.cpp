//Header & Implementation File for C++ Classes | C++ Tutorial  //ref link:https://www.youtube.com/watch?v=ru_u9N7jydU&list=PLFk1_lkqT8MaImkuU0ArJ6_dbr9nEN46a&index=4

class Monster {
public:
	Monster(int hp) {
		mHp = hp;
	}

	int getHp() {
		return mHp;
	}

	void takeDamage(int amount) {
		mHp -= amount;

		if (mHp < 0) {
			mHp = 0;
		}
	}

private:
	int mHp;
};

int main() {
	return 0;
}