#include <iostream>
#include <list>
#include <windows.h>
#include <iomanip>
using namespace std;

void konwenter_binarny(long long b, char * wyjscie)
{
    char przekonwertowane[64];
    for(int i = 63;i>=0;i--)
    {
        if(b % 2 == 0)
        {
            b=b/2;
            przekonwertowane[i]= '0';
        }
        else if(b % 2 == 1)
        {            
            b=b / 2;
            przekonwertowane[i] = '1';
        }
    }
    for(int i = 0; i<64;i++)
    {
        wyjscie[i] = przekonwertowane[i];
    }
}
int main()
{
	//Testy 1
	cout <<"sizeof(long long int):" <<sizeof(long long int)<<endl;
	cout <<"sizeof(long double):"    <<sizeof(long double)<<endl;
	//Testy 2	
	list<long double> lista;
	long double liczba, suma = 0;
	cout << "Podajawaj liczby, podaj 0 by zakonczyc:";
	while(cin >> liczba && liczba !=0)
		lista.push_back(liczba);
	cout << "Wielkosc listy: " << lista.size() << endl;
	for( list<long double>::iterator iter=lista.begin(); iter != lista.end(); iter++)
      suma += *iter;
  	cout << setprecision(20) << "Suma: "<<  suma << endl;
  	//Testy 3 [ostatni bit]  
  	long long x = (1<<0) + (1<<3) +(1<<4) + (1<<7) + (1<<0) * 256 + (1<<3) *256 + (1<<7) *4294967296;//549,755,816,345‬
  	char wyjscie[64];	
  	cout << "Wartosc x: " << x<<endl; 
  	konwenter_binarny(x,wyjscie);
  	cout << "Liczba w kodzie binarnym: ";
  	for (int i = 0; i < 64; i++)
  	{
  		if (i%4 == 0)
  		{
  			cout << " ";
  		}
  		cout << wyjscie[i];  	
  	}
  	cout << endl <<"Ostatni bit: "<<wyjscie[63] ;
	system("PAUSE");
}