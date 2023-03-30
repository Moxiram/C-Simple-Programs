#include <iostream>
#include <math.h>

using namespace std;


class Tzespol2
{
private:
    float Mod;
    float Arg;

public:

    float Re;
    float ur;



    Tzespol2(float r, float u): Re(r), ur(u) {}


    void wypisz(Tzespol2 a)
    {
        if(a.ur>0)cout<<a.Re<<"+"<<a.ur<<"i";
        else cout<<a.Re<<a.ur<<"i";

    }

    float modol(Tzespol2 a)
    {
        float Mod = pow((a.Re*a.Re)+(a.ur*a.ur),1/2);

        return Mod;
    }

    Tzespol2 operator+(const Tzespol2 &b) const
        {
        Tzespol2 suma(0,0);
        suma.Re = Re + b.Re;
        suma.ur = ur + b.ur;
        return suma;
        }

    Tzespol2 operator-(const Tzespol2 &b) const
    {
        Tzespol2 roznica(0,0);
        roznica.Re = Re - b.Re;
        roznica.ur = ur - b.ur;
        return roznica;
    }

    Tzespol2 operator*(const Tzespol2 &b) const
    {
        Tzespol2 iloczyn(0,0);
        iloczyn.Re = (Re*b.Re)-(ur*b.ur);
        iloczyn.ur = (Re*b.ur)-(ur*b.Re);
        return iloczyn;

    }

    Tzespol2 operator/(const Tzespol2 &b) const
    {
        Tzespol2 iloraz(0,0);
        iloraz.Re = ((Re*b.Re)+(ur*b.ur))/((b.Re*b.Re)+(b.ur*b.ur));
        iloraz.ur = ((ur*b.Re)-(Re*b.ur))/((b.Re*b.Re)+(b.ur*b.ur));
        return iloraz;
    }

    bool operator==(const Tzespol2 &b) const
    {
        if(Re==b.Re && ur==b.ur) return true;
        else return false;

    }

    bool operator!=(const Tzespol2 &b) const
    {
        if(Re!=b.Re && ur!=b.ur) return true;
        else return false;

    }



};




