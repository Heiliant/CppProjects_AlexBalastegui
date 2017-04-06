#include <map>
#include <string>
#include <iostream>

void main() {
	//MAP
	std::map<std::string, int> lista;
	lista["Relleno-san"] = 20;
	lista["Relleno-chan"] = 44;
	lista["Relleno Kami-sama"] = 999;
	lista["Relleno Oba-chan"] = 102;


	std::string p;
	int q;
	do {
		std::cin >> p;
		std::cin >> q;
		lista.insert(std::pair<std::string, int>(p, q));

		for (std::map<std::string, int>::iterator it = lista.begin(); it != lista.end(); ++it) {
			std::cout << it->first << "   " << it->second << std::endl;
		}
	} while (true);


	//VECTOR
}
