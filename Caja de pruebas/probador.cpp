#include <iostream>
#include <vector>
#include<string>


std::vector<int> AddVectors(std::vector<int> &v1, std::vector<int> &v2) {
	
	if (v1.size() > v2.size) {
		static std::vector<int>v3(v1.size);
	}
	else {
		static std::vector<int>v3(v2.size);
	}

	return v3;
}

void main() {

	/*
	//Constructor sin argumentos
	std::vector<int>v1;
	//constructor con una lsita de inicializacion
	std::vector<int>v12({ 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 });
	//constructor de copia
	std::vector<int>v4(v12);
	//constructor con num elementos
	std::vector<int>v9(5);
	//constructor con num elementos y valor inicial para todos ellos
	std::vector<int>v10(5, 10);
	//constructor con iteradores
	std::vector<int>v7(v12.begin(), v12.end());
	//constructor con iteradores, se puede dar rango
	std::vector<int>v7(v12.begin()+1, v12.end()-1);
	//constructor con iteradores desde arrays
	int myArray[]{ 16, 2, 77, 29 };
	std::vector<int>v20(myArray, myArray + sizeof(myArray) / sizeof(int));

	int*pv;
	pv = new int[4]{ 1, 2, 3, 4 };
	*/

	class persona {
	public:
		std::string name;
		int birthD;
		int birthM;
		int birthY;
		std::string DNI;
	
		persona(std::vector<std::string> &v1) {
			int i = rand() % v1.size;
			name=v1[i];
			birthD = (rand() % 29)+1;
			birthM = (rand() % 13)+1;
			birthY = rand();
			for (int i = 0; i < 8; ++i) {
				DNI[i]=rand() % 10;
			}
			DNI[8] = static_cast<char>((rand() % (90 - 65)) + 65);
		}

	};

	std::vector<int>v1(5);
	std::vector<int>v2(10, 0);
	std::vector<int>v3({ 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 });
	std::vector<std::string>v4({"Gertrudiz", "Pancracia", "Anacleto", "Hipólito", "Eustaquio", "Fulgencia"});
	std::vector<int>v5(v3);
	std::vector<persona>v6(3);

	std::cout << v6[0].DNI;


	

	
}