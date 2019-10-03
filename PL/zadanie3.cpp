#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void dni_Do_Konca_Roku(short int rok, short int miesiac, short int dzien, bool czyPrzestempny)
{
	//365 dni rok zwykly
	int dni_koniec = czyPrzestempny ? 366: 365;
		
}
bool czyPrzestempny(int rok)
{
	//Warunek
	if((rok %4 == 0) && (rok%100 !=0) || rok%400 == 0)	
	{
		return true;
	}
	else
		return false;
}
void wymysl_Rok()
{
	short int rok_caly[3];

	rok_caly[0] = rand()%5000+ 1582; // od roku 1582 do 5582; ROK
	rok_caly[1] = rand()%12 + 1; // od 1 do 12; MIESIAC	
	bool CzyPrze = czyPrzestempny(rok_caly[0]); // Czy rok przestempny
	if (CzyPrze && rok_caly[1] == 2)
	{
		rok_caly[2] = rand()%29 + 1;
	}
	else if (!CzyPrze && rok_caly[1] == 2)
	{
		rok_caly[2] = rand()%28 + 1;
	}
	else if (rok_caly[1] % 2 == 1 && rok_caly[1] <= 7)
	{
		rok_caly[2] = rand()%31 + 1;
	}
	else if (rok_caly[1] % 2 == 0 && rok_caly[1] <= 7)
	{
		rok_caly[2] = rand()%30 + 1;
	}
	else if (rok_caly[1] % 2 == 1 && rok_caly[1] > 7)
	{
		rok_caly[2] = rand()%30 + 1;
	}
	else if (rok_caly[1] % 2 == 0 && rok_caly[1] > 7)
	{
		rok_caly[2] = rand()%31 + 1;
	}
	cout << "Rok:"<<rok_caly[0]<<"-"<<rok_caly[1]<<"-"<<rok_caly[2];
	dni_Do_Konca_Roku(rok_caly[0],rok_caly[1],rok_caly[2],CzyPrze);
}

int main()
{	
	srand(time(NULL));	
	wymysl_Rok();cout << endl;
}
//######################################
//	TESTY
//######################################
	//for (int i = 0; i < 12; ++i)
	//{
	// 	 wymysl_Rok(2008,4);	
	//}
//void wymysl_Rok(int rok, int miesiac)
//{
//	short int rok_caly[3];
//
//	rok_caly[0] = rok; // od roku 1582 do 5582; ROK
//	rok_caly[1] = miesiac; // od 1 do 12; MIESIAC	
//	bool CzyPrze = czyPrzestempny(rok_caly[0]); // Czy rok przestempny
//	if (CzyPrze && rok_caly[1] == 2)
//	{
//		rok_caly[2] = rand()%29 + 1;
//	}
//	else if (!CzyPrze && rok_caly[1] == 2)
//	{
//		rok_caly[2] = rand()%28 + 1;
//	}
//	else if (rok_caly[1] % 2 == 1 && rok_caly[1] <= 7)
//	{
//		rok_caly[2] = rand()%31 + 1;
//	}
//	else if (rok_caly[1] % 2 == 0 && rok_caly[1] <= 7)
//	{
//		rok_caly[2] = rand()%30 + 1;
//	}
//	else if (rok_caly[1] % 2 == 1 && rok_caly[1] > 7)
//	{
//		rok_caly[2] = rand()%30 + 1;
//	}
//	else if (rok_caly[1] % 2 == 0 && rok_caly[1] > 7)
//	{
//		rok_caly[2] = rand()%31 + 1;
//	}
//	cout << "Rok:"<<rok_caly[0]<<"-"<<rok_caly[1]<<"-"<<rok_caly[2] << endl;
//
//} 