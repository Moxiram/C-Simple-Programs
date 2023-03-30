#include <iostream>
#include <string>

using namespace std;

int powtorzenia;
int rozmiar;
string instrukcje;

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
        for(int w=0; w<instrukcje.length(); w++)
        {
            switch(instrukcje[w])
            {
                case 'T': T(macierz, rozmiar); break;
                case 'D': D(macierz, rozmiar); break;
                case 'H': H(macierz, rozmiar); break;
                case 'V': V(macierz, rozmiar); break;
                case 'A': A(macierz, rozmiar); break;
                case 'B': B(macierz, rozmiar); break;
                case 'C': C(macierz, rozmiar); break;
                case 'X': wspakWiersze(macierz, rozmiar); transponuj(macierz, rozmiar); break;
                case 'Y': wspakWiersze(macierz, rozmiar); wspakKolumny(macierz, rozmiar); break;
                case 'Z': for(int z=0; z<2; z++){wspakWiersze(macierz, rozmiar); transponuj(macierz, rozmiar);} break;
                case '&':
                    for(int m=0; m<rozmiar; m++)
                    {
                        for(int l=0; l<rozmiar; l++) {cout<<macierz[m][l];}
                        cout<<endl;
                    }
            }
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






