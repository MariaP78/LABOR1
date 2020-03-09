#include <iostream>
#include <cassert>

bool prim(int x) {
	//bestimmt ob eine Zahl eine Primzahl ist
	if (x < 2) {
		return false;
	}
	for (int i = 2; i <= x / 2; i++) {
		if (x % i==0) {
			return false;
		}
	}
	return true;
}

void primTest()
{
assert(prim(7) == true);
}

void Pascal(int n) {
	//zeigt die Zahlen auf dem Bildschirm in Form einer paschalschen Dreick
	for (int line = 1; line <= n; line++) {
		int nr = 1; //die erste Zahl ist immer 1 
		for (int i = 1; i <= line; i++)
		{
			std::cout << nr << " ";
			nr = nr * (line - i) / i;
		}
		std::cout << "\n";
	}
}

void sequenz() {
	//sucht die langste Sequenz von Primzahlen im Array 
	primTest();
	int a[10] = { 10,3,4,5,2,7,11,6,7,9 };
	int pos = 0;
	int length = 0;
	int maxLength = 0;
	for (int i = 0; i < sizeof(a) / sizeof(int); i++) {
		//wenn die Zahl eine Primzahl ist wachst die Lange der Sequenz, sonst wird eine neue Sequenz initialisiert
		if (prim(a[i])) {
			length++;
		}
		else {
			pos++;
			length = 0;
		}
		//man untersucht ob die Lange der Sequenz, die grosste ist
		if (length > maxLength) {
			maxLength = length;
		}
	}
	assert(maxLength == 4);

	//man druckt die gesuchte Sequenz auf dem Bildschirm
	for (int i = pos - 1; i < pos + maxLength - 1; i++) {
		std::cout << a[i] << " ";
	}
}

int main(){
	//3.b
	sequenz();
	std::cout << "\n";
	std::cout << "\n";
	//3.a
	Pascal(5);
}