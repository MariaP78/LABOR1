#include "mainLab1ex3.h"


int main3() {
	int opt;
	while (true) {
		std::cout << "Wahlen Sie 1 oder 2? \n 1=a \n 2=b";
		std::cin >> opt;

		if (opt == 1) {
			//3.a
			Pascal(5);
			return 0;
		}

		if (opt == 2) {
			//3.b
			sequenz();
			std::cout << "\n";
			std::cout << "\n";
		}
		if (opt == 4)
			break;
	}

	return 0;
}
