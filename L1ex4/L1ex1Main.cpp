#include "L1ex1Main.h"
using std::cout;
using std::cin;

int main1()
{
    test_prim();
    test_primzahlen_kleiner_als_n();
    test_langste_ansteigende_teilfolge();
    int n, i, j, lange, opt;
    vector <int> v1, v2, v3;
    while (true)
    {
        cout << "\n1 - Aufgabe 1.a. (Primzhalen kleiner als n)\n" << "2 - Aufgabe 1.b. (längste ansteigende Teilfolge)\n" << "3 - exit\n" << "Wähle eine Option: \n";
        cin >> opt;
        if (opt == 1)
        {
            cout << "n=";
            cin >> n;
            v1 = primzahlen_kleiner_als_n(n);
            for (i = 0; i < v1.size(); i++) //Generiert alle Primzahlen kleiner als eine Zahl n.(a)
                cout << v1[i] << ' ';
        }
        if (opt == 2)
        {
            cout << "\nGib die Länge des Vektors:";
            cin >> lange;
            for (j = 0; j < lange; j++) //Lesen ein Vektor.
            {
                v2.push_back(j);
                cout << "v[" << j << "]=";
                cin >> v2[j];
            }
            v3 = langste_ansteigende_teilfolge(v2);
            for (j = 0; j < v3.size(); j++) //Gibt die längste ansteigende zusammenhängende Teilfolge aus einem Vektor von Zahlen.(b)
                cout << v3[j] << ' ';
        }
        if (opt == 3)
        {
            break;
        }
    }
    return 0;
}