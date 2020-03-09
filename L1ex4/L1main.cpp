#include <iostream>
#include "L1ex4Main.h"
#include "L1ex3Main.h"

int main()
{
	int opt;
	
	while (true)
	{
		std::cout << "Wahlen Sie eine Option: ";
		std::cin >> opt;
		if (opt == 1)
		{
			//main1();
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
