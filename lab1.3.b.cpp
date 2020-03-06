#include <iostream>
bool prim(int x) {
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



int main(){
	int a[10] = { 10,3,4,5,2,7,11,6,7,9 };
	int pos = 0;
	int length = 1;
	int maxLength = 1;
	for (int i = 0; i < sizeof(a) / sizeof(int); i++) {
		if (prim(a[i])) {
			length++;
		}
		else {
			pos++;
			length = 1;
		}
		if (length > maxLength) {
			maxLength = length;
		}
	}
	for (int i = pos-1; i < pos + maxLength - 2; i++) {
		std::cout << a[i]<<" ";
	}
}