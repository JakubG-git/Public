#include<iostream>
#include<fstream>
#include<windows.h>
using namespace std;
int main()
{
    system("chcp 1250");
    system("cls");
    ifstream plik;
    plik.open("JED.IN", ios::in);
    if(plik.good()==false)
    {
        cout <<"Brak pliku";
    }
    unsigned short int ilosc_lini;
    plik >> ilosc_lini;    
    unsigned int tablica[ilosc_lini];;
    for (unsigned short i = 2; i <= ilosc_lini+1 ; i++)
    {
        plik >> tablica[i-2];
    } 
    
    
}