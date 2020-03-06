#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
#include <cassert>


//Hier habe ich eine Funktion, die berechnet den angenäherten Wert der Quadratwurzel einer positiven reellen Zahl.
void quadratwurzel_von_nr(int n)
{ 
    // mit fixed and setprecision kann man der Quadratwurzel von n mit zwei Dezimalen anzeigen
    std::cout << "Angenaherten Wert der Quadratwurzel von nr: ";
    std::cout << std::fixed << std::setprecision(2) << sqrt(n) << "\n";
    //std::cout << sqrt(n);
}

//Hier habe ich eine Funktion, die prüft, ob eine Zahl eine Primzahl ist.

bool ist_prim(int n)
{
    if (n < 2)
    {
        return false;
    }
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return false;
        }

    }
    return true;
}

//Hier habe ich eine Funktion,die findet die längste zusammenhängende Teilfolge so, 
//dass die Differenz von zwei aufeinanderfolgenden Elementen eine Primzahl ist.

void differenz_primzahl(std::vector <int> v)
{
    int l = 0;
    int lmax = 0;
    int u = 0;


    for (int i = 1; i <= v.size() - 1; i++)
    {
        if (ist_prim(abs(v[i] - v[i - 1])))
        {
            l += 1;
            if (l > lmax)
            {
                lmax = l;
                u = i;
            }
        }
        else
            l = 0;
    }
    if (u == 0)
        std::cout << "Es existiert nicht!!!";
    else
        for (int i = u - lmax; i <= u; i++)
            std::cout << v[i] << " ";


}
int main()
{
    /*
    Labor 1
    4.
    a. Berechnen Sie den angenäherten Wert der Quadratwurzel einer positiven reellen Zahl.
    b. Gegeben sei ein Vektor von Zahlen, finden Sie die längste zusammenhängende Teilfolge so,
    dass die Differenz von zwei aufeinanderfolgenden Elementen eine Primzahl ist.
    */

    int nr;

    std::cout << "Positiv reel Zahl: ";
    std::cin >> nr;

    //Assert Funktion fur testen, ob den Zahl is positiv.
    assert(nr > 0);

    std::vector <int> vect { 1,3,5,7,9,11,13,15,17,19,21,23,6,2,4,6,8,10,12 };

    //4.a.
    quadratwurzel_von_nr(nr);
    std::cout << "\n";

    //4.b.
    std::cout << "Diese ist die langste zusammenhangende Teilfolge, wo die Differenz von zwei aufeinanderfolgenden Elementen eine Primzahl ist: ";
    differenz_primzahl(vect);
    std::cout << "\n";

    return 0;
 }

