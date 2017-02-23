#include <iostream>
#include <ctime>
#include <string>

enum class Weapon { FISTS, GUN, SHOTGUN, REVOLVER, SNIPER, MACHINE_GUN, MAX };

class Zombie;

class Player {
	public:
		float precision;
		Weapon weapon;
		int life;

	void attack(Zombie &);

	bool isalive() {
		return(life > 0);
	}

	Player() : weapon{ Weapon(rand() % (int)Weapon::MAX) }, precision{ ((float)(rand() % 100)) / 100.0f }, life{ rand() % 100 } {};

};

class Zombie {
public:
	int distancetoPlayer;
	float speed;
	float damage;
	int life;

	void attack(Player &a) {
		if (distancetoPlayer <= 0) {
			a.life -= damage;
		}
		else {
			distancetoPlayer--;
		}
	}

	bool isalive() {
		return (life > 0);
	}

	Zombie() : distancetoPlayer{ rand() % 180 + 20 }, speed{ rand() % 200 / 100.0f }, damage{ rand() % 200 / 100.0f }, life{ rand() % 200 / 100 } {};
};

void Player::attack(Zombie &malo) {
	malo.life -= static_cast<float>(static_cast<int>(weapon))*precision;
}

int main()
{
	int amountOfZombies=10;
	Player player;
	Zombie zombies[10];
	bool zombiesAreAlive;
	std::string arma;
	do {
		zombiesAreAlive = false;
		for (int i = 0; i < amountOfZombies; i++) {
			player.attack(zombies[i]);
			zombies[i].attack(player);
			if (zombies[i].isalive())
				zombiesAreAlive = true;
			switch (player.weapon) {
			case Weapon::FISTS: arma = "FISTS";
				break;
			case Weapon::GUN: arma = "GUN";
				break;
			case Weapon::SHOTGUN: arma = "SHOTGUN";
				break;
			case Weapon::REVOLVER: arma = "REVOLVER";
				break;
			case Weapon::SNIPER: arma = "SNIPER";
				break;
			case Weapon::MACHINE_GUN: arma = "MACHINE_GUN";
				break;

			}
			if(i==0)
			std::cout << "Player\n" << "	life: " << player.life << ", weapon: " << arma << ", precision: " << player.precision << std::endl;
			std::cout << "Zombie[" << i << "]\n" << "	life: " << zombies[i].life << ", distance: " << zombies[i].distancetoPlayer << ", speed: " << zombies[i].speed;
			std::cout << ", damage: " << zombies[i].damage << std::endl;
		}
		std::cout << "\n ------------------------------------------------------- " << std::endl;
	} while (zombiesAreAlive && player.life<0);
	if (zombiesAreAlive)
		std::cout << "\nHAS PERDUT, HO SENTO";
	else
		std::cout << "\nHAS GUANYAT, FELICITATS";
}
