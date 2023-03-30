#include <iostream>

using namespace std;

class Tksiazka
{
    protected:
    string Autor, tytul, RokWydania, Wydawnictwo;

    public:

        Tksiazka(string autor,string tyt,string rok,string wyda) : Autor(autor), tytul(tyt), RokWydania(rok), Wydawnictwo(wyda)
        {
            cout<<"Konstruktor klasy Tksiazka"<<endl;
        }
        ~Tksiazka()
        {
            cout<<"Destruktor klasy Tksiazka"<<endl;
        }

    void czytajdane()
    {
        cout<<"Autor: "; cin>>Autor; cout<<endl;
        cout<<"Tytul: "; cin>>tytul; cout<<endl;
        cout<<"Rok Wydania: "; cin>>RokWydania; cout<<endl;
        cout<<"Wydawnictwo: "; cin>>Wydawnictwo; cout<<endl;
    }


    void piszdane()
    {
        cout<<"Autor: "<<Autor<<endl;
        cout<<"Tytul: "<<tytul<<endl;
        cout<<"Rok Wydania: "<<RokWydania<<endl;
        cout<<"Wydawnictwo: "<<Wydawnictwo<<endl;
    }
};




class TZapisMowy
{
    protected:
        string Lektor, CzasTrwania, Nosnik;

    public:

        TZapisMowy(string lek, string czas, string nos) : Lektor(lek), CzasTrwania(czas), Nosnik(nos)
        {
            cout<<"Konstruktor klasy TZapisMowy"<<endl;
        }
        ~TZapisMowy()
        {
            cout<<"Destruktor klasy TZapisMowy"<<endl;
        }

         void czytajdane()
    {
        cout<<"lektor: "; cin>>Lektor; cout<<endl;
        cout<<"CzasTrwania: "; cin>>CzasTrwania; cout<<endl;
        cout<<"Nosnik: "; cin>>Nosnik; cout<<endl;
    }


        void piszdane()
        {
            cout<<"Lektor: "<<Lektor<<endl;
            cout<<"Czas Trwania: "<<CzasTrwania<<endl;
            cout<<"Nosnik: "<<Nosnik<<endl;
        }
};



class TAudiobook : public Tksiazka, TZapisMowy
{
    private:
    string LiczbaNosnikow;

    public:

        TAudiobook(string autor,string tyt,string rok,string wyda, string lek, string czas, string nos, string licznos) : Tksiazka(autor,tyt,rok,wyda), TZapisMowy(lek,czas,nos), LiczbaNosnikow(licznos)
        {
            cout<<"Konstruktor klasy TAudiobook"<<endl;
        }

        ~TAudiobook()
        {
            cout<<"Destruktor klasy TAudiobook"<<endl;
        }

        void czytajdane()
    {
        cout<<"Autor: "; cin>>Autor; cout<<endl;
        cout<<"Tytul: "; cin>>tytul; cout<<endl;
        cout<<"Rok Wydania: "; cin>>RokWydania; cout<<endl;
        cout<<"Wydawnictwo: "; cin>>Wydawnictwo; cout<<endl;

        cout<<"lektor: "; cin>>Lektor; cout<<endl;
        cout<<"CzasTrwania: "; cin>>CzasTrwania; cout<<endl;
        cout<<"Nosnik: "; cin>>Nosnik; cout<<endl;
    }


    void piszdane()
    {
        cout<<"Autor: "<<Autor<<endl;
        cout<<"Tytul: "<<tytul<<endl;
        cout<<"Rok Wydania: "<<RokWydania<<endl;
        cout<<"Wydawnictwo: "<<Wydawnictwo<<endl;
        cout<<endl;
        cout<<"Lektor: "<<Lektor<<endl;
        cout<<"Czas Trwania: "<<CzasTrwania<<endl;
        cout<<"Nosnik: "<<Nosnik<<endl;
    }

};
