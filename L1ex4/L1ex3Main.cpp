#include "L1ex3Main.h"


int main3() {
	int opt;
	while (true) {
		std::cout << "Wahlen Sie 1 oder 2? \n 1=a \n 2=b \n 3=exit";
		std::cin >> opt;

		if (opt == 1) {
			//3.a
			Pascal(5);
		}

		if (opt == 2) {
			//3.b
			sequenz();
			std::cout << "\n";
			std::cout << "\n";
		}
		if (opt == 3)
			break;
	}

	return 0;
}
