#include <iostream>

void Pascal(int n) {
	for (int line = 1; line <= n; line++) {
		int nr = 1;
		for (int i = 1; i <= line; i++)
		{
			std::cout << nr << " ";
			nr = nr * (line - i) / i;
		}
		std::cout << "\n";
	}
}

int main() {
	Pascal(5);
}