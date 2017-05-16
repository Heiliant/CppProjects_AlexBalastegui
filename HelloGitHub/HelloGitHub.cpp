#include <iostream>
#include <ctime>
#include <string>
#include "stdafx.h"


enum class Weapon { FISTS, GUN, SHOTGUN, REVOLVER, SNIPER, MACHINE_GUN, MAX };

class Zombie {
private:
	int distancetoPlayer;
	float speed;
	float damage;
public:
	int life;

	void attack(Player &) {

	}

	bool isalive() {

	}

	Zombie() {

	}
};

class Player {
	Weapon weapon;
	float precision;
	int life;

	void attack(Zombie &malo) {
		malo.life -= static_cast<int>(weapon)*precision;
	}

	bool isalive() {

	}

	Player() {

	}
};

int main5()
{
	Weapon a = Weapon::SNIPER;

	std::cout << static_cast<int>(a) << std::endl;
	return 0;
}
