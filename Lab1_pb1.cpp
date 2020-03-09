//a.Generieren alle Primzahlen, die kleiner als eine natürliche Zahl n sind.
//b.Gibt die längste ansteigende zusammenhängende Teilfolge aus einem Vektor von Zahlen.

#include <iostream>
#include <cassert>
#include <vector>
using std::cout;
using std::cin;
using std::vector;

//Funktion prim prüft, ob eine ganze Zahl prim ist.
bool prim(int nr)
{
    int ist_prim = true;
    if (nr < 2)
        ist_prim = false;
    for (int i = 2; i <= nr / 2; i++)
    {
        if (nr % i == 0)
        {
            ist_prim = false;
            break;
        }
    }
    return ist_prim;
}

//Teste für prim
void test_prim()
{
    assert(prim(1) == false);
    assert(prim(2) == true);
    assert(prim(4) == false);
}

//Gibt ein Vektor zurück mit allen Primzahlen kleiner als eine gegebene ganze Zahl n.
vector <int> primzahlen_kleiner_als_n(int n)
{
    vector <int> v;
    int j = 0;
    for (int i = 1; i < n; i++)
        if (prim(i) == true)
        {
            v.push_back(j);
            v[j++] = i;
        }
    return v;
}

//Teste für primzahlen_kleiner_als_n 
void test_primzahlen_kleiner_als_n()
{
    vector <int> result1 = { 2, 3, 5 }, result2 = {};
    assert(primzahlen_kleiner_als_n(6) == result1);
    assert(primzahlen_kleiner_als_n(1) == result2);
}

//Gibt ein Vektor zurück mit der längsten ansteigenden zusammenhängenden Teilfolge aus einem Vektor von Zahlen. Wenn 2 Teilfolgen die selbe Länge haben, gibt die letzte.
vector <int> langste_ansteigende_teilfolge(vector <int> v)
{
    int contor = 1, poz2 = 0, maxim = 0, maxcontor = 1, i = 0, j = 0;
    vector <int> v2;
    while (i < v.size() - 1)
    {
        if (v[i] < v[i + 1])
        {
            poz2 = i + 1;
            contor++;
        }
        else
            contor = 1;
        if (poz2 > maxim)
        {
            maxim = poz2;
            maxcontor = contor;
        }
        i++;
    }
    for (i = maxim - maxcontor + 1; i <= maxim; i++)
    {
        v2.push_back(j);
        v2[j++] = v[i];
    }
    return v2;
}

//Teste für langste_ansteigende_teilfolge
void test_langste_ansteigende_teilfolge()
{
    vector <int> v1 = { 1,2,1,2,3,4 }, v2 = { 1,2,2,3 }, result1 = { 1,2,3,4 }, result2 = { 2,3 };
    assert(langste_ansteigende_teilfolge(v1) == result1);
    assert(langste_ansteigende_teilfolge(v2) == result2);
}

int main()
{
    test_prim();
    test_primzahlen_kleiner_als_n();
    test_langste_ansteigende_teilfolge();
    int n, i, j, lange;
    vector <int> v1, v2, v3;
    cout << "n=";
    cin >> n;
    v1 = primzahlen_kleiner_als_n(n);
    for (i = 0; i < v1.size(); i++) //Generiert alle Primzahlen kleiner als eine Zahl n.(a)
        cout << v1[i] << ' ';
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
    return 0;
}