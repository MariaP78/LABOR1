#include <iostream>
#include "L1ex4Main.h"
#include "L1ex3Main.h"
#include "L1ex1Main.h"

int main()
{
	int opt;
	
	while (true)
	{
		std::cout << "Wahlen Sie eine Option: \n 1-Problem 1 \n 2-Problem 4 \n 3-Problem 3 \n 4-Exit";
		std::cin >> opt;
		if (opt == 1)
		{
			main1();
		}
		if (opt == 2)
		{
			main4();
		}
		if (opt == 3)
		{
			main3();
		}
		if (opt == 4)
			break;
	}

	return 0;
}
