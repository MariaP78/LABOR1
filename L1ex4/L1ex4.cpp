#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
#include <cassert>


//Hier habe ich eine Funktion, die berechnet den angenäherten Wert der Quadratwurzel einer positiven reellen Zahl.

float quadratwurzel_von_nr(int n)
{ 
    // mit fixed and setprecision kann man der Quadratwurzel von n mit zwei Dezimalen anzeigen
    return sqrt(n);
    //std::cout << sqrt(n);
}

//Hier habe ich eine Funktion die testet die quadratwurzel_von_nr Funktion.

void quadratwurzelTest() 
{
    assert(quadratwurzel_von_nr(36) == 6);
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

//Hier habe ich eine Funktion die testet die ist_prim Funktion.

void ist_primTest() 
{
    assert(ist_prim(7) == true);
}

//Hier habe ich eine Funktion,die findet die längste zusammenhängende Teilfolge so, 
//dass die Differenz von zwei aufeinanderfolgenden Elementen eine Primzahl ist.

std::vector<int> differenz_primzahl(std::vector <int> v)
{
    int l = 0;
    int lmax = 0;
    int u = 0;
    std::vector<int> vect;

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
    {
        std::cout << "Es existiert nicht!!!";
    }
    else
    {
        
        int k = 0;
        for (int i = u - lmax; i <= u; i++)
        {
            vect.push_back(k);
            vect[k++] = v[i];
        }
    }
    return vect;

}

//Hier habe ich eine Funktion die testet die differenz_primzahl Funktion.

void differenz_primzahlTest()
{
    std::vector <int> vect {1, 3, 5, 7, 9, 11, 13, 8, 10, 2, 14};
    std::vector <int> rez{ 1, 3, 5, 7, 9, 11, 13, 8, 10};
    assert(differenz_primzahl(vect) == rez);
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

    quadratwurzelTest();
    ist_primTest();
    differenz_primzahlTest();

    int nr;

    std::cout << "Positiv reel Zahl: ";
    std::cin >> nr;

    std::vector <int> vect { 1,3,5,7,9,11,13,15,17,19,21,23,6,2,4,6,8,10,12 };

    //4.a.
    std::cout << "Angenaherten Wert der Quadratwurzel von nr: ";
    std::cout<< quadratwurzel_von_nr(nr);
    std::cout << "\n";

    //4.b.
    
    std::cout << "Diese ist die langste zusammenhangende Teilfolge, wo die Differenz von zwei aufeinanderfolgenden Elementen eine Primzahl ist: ";
    std::vector<int> vect2 = differenz_primzahl(vect);
    for (int i = 0; i <= vect2.size() - 1; i++)
    {
        std::cout << vect2[i] << " ";
    }
  
    std::cout << "\n";

    return 0;
 }

