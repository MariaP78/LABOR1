//a.Generieren alle Primzahlen, die kleiner als eine natürliche Zahl n sind.
//b.Gibt die längste ansteigende zusammenhängende Teilfolge aus einem Vektor von Zahlen.

#include "L1ex1.h"

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

//Gibt ein Vektor zurück mit der längsten ansteigenden zusammenhängenden Teilfolge aus einem Vektor von Zahlen. Wenn 2 die gleiche Länge haben, gibt die erste.
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
        if (contor > maxcontor)
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