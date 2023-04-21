#include <iostream>
#include <string>

using namespace std;

int powtorzenia;
int rozmiar;
string instrukcje;
char operacja;

void transponuj(char** tab, int n);
void wspakWiersze(char** tab, int n);
void wspakKolumny(char** tab, int n);

void T(char **Tab, int r);
void D(char **Tab, int r);
void H(char **Tab, int r);
void V(char **Tab, int r);
void A(char **Tab, int r);
void B(char **Tab, int r);
void C(char **Tab, int r);
//void X(char **Tab, int r);
//void Y(char **Tab, int r);
//void Z(char **Tab, int r);


int main()
{
    cin>>powtorzenia;
    for(int p=0; p<powtorzenia; p++)
    {
        cin>>rozmiar;

        char **macierz = new char *[rozmiar];
        for(int i=0; i<rozmiar; i++)
        {
            macierz[i] = new char [rozmiar];
            for(int j=0; j<rozmiar; j++)
            {
                cin>>macierz[i][j];
            }
        }


        cin>> instrukcje;
        for(int w=0; w<=(instrukcje.length()-1); w++)
        {
            switch(instrukcje[0])
            {
            case 'T':{									//*
                switch(instrukcje[w+1]) {
                case 'D': instrukcje[0]='B'; break;
                case 'H': instrukcje[0]='A'; break;
                case 'V': instrukcje[0]='X'; break;
                case 'Z': instrukcje[0]='H'; break;
                case 'A': instrukcje[0]='H'; break;
                case 'B': instrukcje[0]='D'; break;
                case 'Y': instrukcje[0]='D'; break;
                case 'C': instrukcje[0]='V'; break;
                case 'X': instrukcje[0]='V'; break;
                case 'T': instrukcje[0]= instrukcje[w+2];  instrukcje[w+2]='!'; break;
                case '!': break;
                }} break;

            case 'D':{									//&
                switch(instrukcje[w+1]){
                case 'T': instrukcje[0]='B'; break;
                case 'H': instrukcje[0]='X'; break;
                case 'V': instrukcje[0]='A'; break;
                case 'Z': instrukcje[0]='V'; break;
                case 'A': instrukcje[0]='V'; break;
                case 'B': instrukcje[0]='T'; break;
                case 'Y': instrukcje[0]='T'; break;
                case 'C': instrukcje[0]='H'; break;
                case 'X': instrukcje[0]='H'; break;
                case 'D': instrukcje[0]= instrukcje[w+2];  instrukcje[w+2]='!'; break;
                case '!': break;
                }} break;
            case 'H':{ 									//&
                switch(instrukcje[w+1]){
                case 'T': instrukcje[0]='X'; break;
                case 'D': instrukcje[0]='A'; break;
                case 'V': instrukcje[0]='B'; break;
                case 'Z': instrukcje[0]='D'; break;
                case 'A': instrukcje[0]='D'; break;
                case 'B': instrukcje[0]='V'; break;
                case 'Y': instrukcje[0]='V'; break;
                case 'C': instrukcje[0]='T'; break;
                case 'X': instrukcje[0]='T'; break;
                case 'H': instrukcje[0]= instrukcje[w+2];  instrukcje[w+2]='!';
                case '!': break;
                }} break;
            case 'V':{ 									//*
                switch(instrukcje[w+1]){
                case 'T': instrukcje[0]='A'; break;
                case 'D': instrukcje[0]='X'; break;
                case 'H': instrukcje[0]='B'; break;
                case 'Z': instrukcje[0]='T'; break;
                case 'A': instrukcje[0]='T'; break;
                case 'B': instrukcje[0]='H'; break;
                case 'Y': instrukcje[0]='H'; break;
                case 'C': instrukcje[0]='D'; break;
                case 'X': instrukcje[0]='D'; break;
                case 'V': instrukcje[0]= instrukcje[w+2];  instrukcje[w+2]='!'; break;
                case '!': break;
                }}   break;
            case 'A':{									//
                switch(instrukcje[w+1]){
                case 'T': instrukcje[0]='V'; break;
                case 'D': instrukcje[0]='H'; break;
                case 'H': instrukcje[0]='T'; break;
                case 'V': instrukcje[0]='D'; break;
                case 'A': instrukcje[0]='B'; break;
                case 'B': instrukcje[0]='X'; break;
                case 'Y': instrukcje[0]='X'; break;
                case 'C': instrukcje[0]= instrukcje[w+2];  instrukcje[w+2]='!'; break;
                case 'X': instrukcje[0]= instrukcje[w+2];  instrukcje[w+2]='!'; break;
                case 'Z': instrukcje[0]='B'; break;
                case '!': break;
                }}   break;
            case 'B':{									//
                switch(instrukcje[w+1]){
                case 'T': instrukcje[0]='D'; break;
                case 'D': instrukcje[0]='T'; break;
                case 'H': instrukcje[0]='V'; break;
                case 'V': instrukcje[0]='H'; break;
                case 'A': instrukcje[0]='C'; break;
                case 'B': instrukcje[0]= instrukcje[w+2];  instrukcje[w+2]='!'; break;
                case 'Y': instrukcje[0]= instrukcje[w+2];  instrukcje[w+2]='!'; break;
                case 'C': instrukcje[0]='A'; break;
                case 'X': instrukcje[0]='A'; break;
                case 'Z': instrukcje[0]='C'; break;
                case '!': break;
                }}  break;
            case 'C':									//*
                switch(instrukcje[w+1]){
                case 'T': instrukcje[0]='H'; break;
                case 'D': instrukcje[0]='V'; break;
                case 'H': instrukcje[0]='D'; break;
                case 'V': instrukcje[0]='T'; break;
                case 'A': instrukcje[0]= instrukcje[w+2]; instrukcje[w+2]='!'; break;
                case 'B': instrukcje[0]='A'; break;
                case 'Y': instrukcje[0]='A'; break;
                case 'C': instrukcje[0]='B'; break;
                case 'X': instrukcje[0]='B'; break;
                case 'Z': instrukcje[0]= instrukcje[w+2]; instrukcje[w+2]='!'; break;
                case '!': break;
                } break;
            case 'X':{									//
                switch(instrukcje[w+1]){
                case 'T': instrukcje[0]='H'; break;
                case 'D': instrukcje[0]='V'; break;
                case 'H': instrukcje[0]='D'; break;
                case 'V': instrukcje[0]='T'; break;
                case 'A': instrukcje[0]= instrukcje[w+2];  instrukcje[w+2]='!'; break;
                case 'B': instrukcje[0]='A';  break;
                case 'Y': instrukcje[0]='A'; break;
                case 'C': instrukcje[0]='B'; break;
                case 'X': instrukcje[0]='B'; break;
                case 'Z': instrukcje[0]= instrukcje[w+2];  instrukcje[w+2]='!'; break;
                case '!': break;
                }}   break;
            case 'Y':{									//
                switch(instrukcje[w+1]){
                case 'T': instrukcje[0]='D'; break;
                case 'D': instrukcje[0]='T'; break;
                case 'H': instrukcje[0]='V'; break;
                case 'V': instrukcje[0]='H'; break;
                case 'A': instrukcje[0]='C'; break;
                case 'B': instrukcje[0]= instrukcje[w+2];  instrukcje[w+2]='!'; break;
                case 'Y': instrukcje[0]= instrukcje[w+2];  instrukcje[w+2]='!'; break;
                case 'C': instrukcje[0]='A'; break;
                case 'X': instrukcje[0]='A'; break;
                case 'Z': instrukcje[0]='C'; break;
                case '!': break;
                }}  break;
            case 'Z' :{									//*
                switch(instrukcje[w+1]){
                case 'T': instrukcje[0]='V'; break;
                case 'D': instrukcje[0]='H'; break;
                case 'H': instrukcje[0]='T'; break;
                case 'V': instrukcje[0]='D'; break;
                case 'A': instrukcje[0]='B'; break;
                case 'B': instrukcje[0]='X'; break;
                case 'Y': instrukcje[0]='X'; break;
                case 'C': instrukcje[0]= instrukcje[w+2];  instrukcje[w+2]='!'; break;
                case 'X': instrukcje[0]= instrukcje[w+2];  instrukcje[w+2]='!'; break;
                case 'Z': instrukcje[0]='B'; break;
                case '!': break;
                }}   break;

                }

                
        }
        //cout<<instrukcje[0]<<endl;
        operacja = instrukcje[0];

            switch(operacja)
            {
                case 'T': T(macierz, rozmiar); break;  //transpozycja wzglêdem g³ównej przek¹tnej:
                case 'D': D(macierz, rozmiar); break;  //transpozycja wzglêdem drugiej przek¹tnej
                case 'H': H(macierz, rozmiar); break;  //odbicie poziome
                case 'V': V(macierz, rozmiar); break;  //odbicie pionowe
                case 'A': transponuj(macierz, rozmiar); wspakWiersze(macierz, rozmiar); break;  //obrót w prawo o 90°
                case 'B': wspakWiersze(macierz, rozmiar); wspakKolumny(macierz, rozmiar); break;  //obrót w prawo o 180°
                case 'C': wspakWiersze(macierz, rozmiar); transponuj(macierz, rozmiar); break;  //obrót w prawo o 270°
                case 'X': wspakWiersze(macierz, rozmiar); transponuj(macierz, rozmiar); break;  //obrót w lewo o 90°
                case 'Y': wspakWiersze(macierz, rozmiar); wspakKolumny(macierz, rozmiar); break;  //obrót w lewo o 180°
                case 'Z': A(macierz, rozmiar); break; //obrót w lewo o 270°
            }

                    for(int m=0; m<rozmiar; m++)
                    {
                        for(int l=0; l<rozmiar; l++) {cout<<macierz[m][l];}
                        cout<<endl;
                    }



        delete [] macierz;
    }


}




void T(char **Tab, int r)
{
    char tmp;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<i; j++)
        {
            tmp = Tab[i][j];
            Tab[i][j] = Tab[j][i];
            Tab[j][i] = tmp;
        }
    }
}


void D(char **Tab, int r)
{
    char tmp;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<r-i; j++)
        {
            tmp = Tab[i][j];
            Tab[i][j] = Tab[r-j-1][r-i-1];
            Tab[r-j-1][r-i-1] = tmp;
        }
    }
}


void H(char **Tab, int r)
{
    char tmp;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<r/2; j++)
        {
            tmp = Tab[i][r-j-1];
            Tab[i][r-j-1] = Tab[i][j];
            Tab[i][j] = tmp;
        }
    }
}


void V(char **Tab, int r)
{
    char tmp;
    for(int i=0; i<r/2; i++)
    {
        for(int j=0; j<r; j++)
        {
            tmp = Tab[r-i-1][j];
            Tab[r-i-1][j] = Tab[i][j];
            Tab[i][j] = tmp;
        }
    }
}


void A(char **Tab, int r)
{
    char tmp;
    for(int i=0; i<r/2; i++)
    {
        for(int j=i; j<r-i-1; j++)
        {
            tmp = Tab[r-j-1][i];
            Tab[r-j-1][i] = Tab[r-i-1][r-j-1];
            Tab[r-i-1][r-j-1] = Tab[j][r-i-1];
            Tab[j][r-i-1] = Tab[i][j];
            Tab[i][j] = tmp;
        }
    }

}


void B(char **Tab, int r)
{
    char tmp;
    for(int b=0; b<2; b++)
    {
    for(int i=0; i<r/2; i++)
    {
        for(int j=i; j<r-i-1; j++)
        {
            tmp = Tab[r-j-1][i];
            Tab[r-j-1][i] = Tab[r-i-1][r-j-1];
            Tab[r-i-1][r-j-1] = Tab[j][r-i-1];
            Tab[j][r-i-1] = Tab[i][j];
            Tab[i][j] = tmp;
        }
    }
    }

}


void C(char **Tab, int r)
{
    char tmp;
    for(int b=0; b<3; b++)
    {
    for(int i=0; i<r/2; i++)
    {
        for(int j=i; j<r-i-1; j++)
        {
            tmp = Tab[r-j-1][i];
            Tab[r-j-1][i] = Tab[r-i-1][r-j-1];
            Tab[r-i-1][r-j-1] = Tab[j][r-i-1];
            Tab[j][r-i-1] = Tab[i][j];
            Tab[i][j] = tmp;
        }
    }
    }

}

void transponuj(char** tab, int n) {
  for (int i = 0; i < n; i ++)
    for (int j = i + 1; j < n; j ++)
      swap(tab[i][j], tab[j][i]);
}

void wspakWiersze(char** tab, int n) {
  for (int i = 0; i < n; i ++)
    for (int j = 0; j < n / 2; j ++)
      swap(tab[i][j], tab[i][n - 1 - j]);
}

void wspakKolumny(char** tab, int n) {
  for (int i = 0; i < n/2; i ++)
    for (int j = 0; j < n; j ++)
      swap(tab[i][j], tab[n - 1 - i][j]);
}






