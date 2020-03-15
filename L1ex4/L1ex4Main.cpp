#include <iostream>
#include "L1ex4Main.h"


int main4()
{
    /*
    Labor 1
    4.
    a. Berechnen Sie den angenäherten Wert der Quadratwurzel einer positiven reellen Zahl.
    b. Gegeben sei ein Vektor von Zahlen, finden Sie die längste zusammenhängende Teilfolge so,
    dass die Differenz von zwei aufeinanderfolgenden Elementen eine Primzahl ist.
    */

    quadratwurzelTest();
    ist_primTest();
    differenz_primzahlTest();

    int option;
    int nr;

    while (true)
    {
        std::vector <int> vect{ 1,3,5,7,9,11,13,15,17,19,21,23,6,2,4,6,8,10,12 };

        std::cout << "Wahlen Sie eine option: \n 1-Problem 4.a \n 2-Problem 4.b \n 3-Exit Pb 4";
        std::cin >> option;

        if (option == 1)
        {
            //4.a.
            std::cout << "Positiv reel Zahl: ";
            std::cin >> nr;
            std::cout << "Angenaherten Wert der Quadratwurzel von nr: ";
            std::cout << quadratwurzel_von_nr(nr);
            std::cout << "\n";
        }

        if (option == 2)
        {

            //4.b.

            std::cout << "Diese ist die langste zusammenhangende Teilfolge, wo die Differenz von zwei aufeinanderfolgenden Elementen eine Primzahl ist: ";
            std::vector<int> vect2 = differenz_primzahl(vect);
            for (int i = 0; i <= vect2.size() - 1; i++)
            {
                std::cout << vect2[i] << " ";
            }

            std::cout << "\n";
        }

        if (option == 3) break;
    }


    return 0;
}
