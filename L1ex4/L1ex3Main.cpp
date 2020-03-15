#include "L1ex3Main.h"


int main3() {
	int opt;
	while (true) {
		std::cout << "Was wollen Sie wahlen? \n 1-3.a \n 2-3.b \n 3-exit \n";
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
