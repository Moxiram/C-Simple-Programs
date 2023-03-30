#include <iostream>
#include "Tzespol2.h"

using namespace std;


int main()
{
    Tzespol2 licz1(1,2);
    Tzespol2 licz2(3,4);

    Tzespol2 wynik(0,0);

    wynik = licz1 + licz2;
    wynik.wypisz(wynik);
    cout<<endl;

    wynik = licz1 - licz2;
    wynik.wypisz(wynik);
    cout<<endl;

    wynik = licz1 * licz2;
    wynik.wypisz(wynik);
    cout<<endl;

    wynik = licz1 / licz2;
    wynik.wypisz(wynik);
    cout<<endl;

    if(licz1==licz2) cout<<"1";
    else cout<<"0";
    cout<<endl;

    if(licz1!=licz2) cout<<"1";
    else cout<<"0";
    cout<<endl;

}
