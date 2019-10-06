#include<iostream>
#include<fstream>
#include<windows.h>
using namespace std;
struct drzewo
{
    drzewo * lewo;
    drzewo * prawo;
    int poziom;
    int dane;
};

int main()
{
    system("chcp 1250");
    system("cls");
    ifstream plik;
    plik.open("JED.IN", ios::in);
    if(plik.good()==false)
    {
        cout <<"Brak pliku z danymi wejściowymi";
    }
    unsigned short int ilosc_lini;
    plik >> ilosc_lini;        
    unsigned int tablica[15];    
    for (unsigned short i = 2; i <= ilosc_lini+1 ; i++)
    {
        plik >> tablica[i-2];
    } 
    plik.close();
    for (unsigned short int  i = 0; i < ilosc_lini; i++)
    {
        int liczba = 1;
        while (liczba  % tablica[i] !=0)
        {
            //
        }
        if (liczba  % tablica[i] ==0)
        {
            cout << liczba << endl;
        }      
        
    }
    
    
}