#include "L1ex1.h"
#include "L1ex1test.h"
#include <cassert>
#include <vector>
using std::vector;

//Teste für prim
void test_prim()
{
    assert(prim(1) == false);
    assert(prim(2) == true);
    assert(prim(4) == false);
}

//Teste für primzahlen_kleiner_als_n 
void test_primzahlen_kleiner_als_n()
{
    vector <int> result1 = { 2, 3, 5 }, result2 = {};
    assert(primzahlen_kleiner_als_n(6) == result1);
    assert(primzahlen_kleiner_als_n(1) == result2);
}

//Teste für langste_ansteigende_teilfolge
void test_langste_ansteigende_teilfolge()
{
    vector <int> v1 = { 1,2,1,2,3,4 }, v2 = { 1,2,2,3 }, result1 = { 1,2,3,4 }, result2 = { 1,2 };
    assert(langste_ansteigende_teilfolge(v1) == result1);
    assert(langste_ansteigende_teilfolge(v2) == result2);
}