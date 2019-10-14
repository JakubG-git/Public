#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
    system("chcp 1250");
    system("cls");
    unsigned short int rok;
    unsigned short int miesiac, dzien;
    cout << "Podaj rok: ";
    cin >> rok;
    cout << "Podaj miesiac: ";
    cin >> miesiac;
    switch (miesiac)
    {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
            break;
        default:
            cout << "Podano zla liczbe"<<endl;
            return 0;
            break;
    }    
    cout << "Podaj dzien: ";
    cin >> dzien;
    bool czyPrzes = (((rok %4 == 0) && (rok%100 !=0) || rok%400 == 0));

}