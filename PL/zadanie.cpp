#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>

using namespace std;
void konwertowanie_bitowe(int b, char * out)
{
    char przekonwertowane[8];
    for(int i = 7;i>=0;i--)
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
    for(int i = 0; i<8;i++)
    {
        out[i] = przekonwertowane[i];
    }
}
void floating_point(float f)
{    
    if(f>0)
    {
        cout << "0" << " ";        
    }
    else
    {
        cout << "1" << " ";    
        f = -f;    
    }    
    int bias, przesuniencie_bias = 0;
    float operator_mantisy;
    char premantissa[23], exp[8], liczba[8], ostateczna_tablica_char[23];
    bias =  pow(2,((32 / sizeof(f)) - 1)) - 1;    
    int blisko_potega = 0; 
    for (int i=(int)f; i>=1; i--) 
    {         
        if ((i & (i-1)) == 0) 
        { 
            blisko_potega = i; 
            break; 
        } 
    }    
    przesuniencie_bias += log2(blisko_potega);      
    operator_mantisy = fmod(f,1);
    cout << setprecision(10);
    konwertowanie_bitowe((int)f,liczba);
    konwertowanie_bitowe(bias + przesuniencie_bias, exp);
    for(int i = 0;i<23;i++)
    {        
        if (operator_mantisy <1)
        {
            operator_mantisy *=2;
            premantissa[i] = '0';                      
        }
        if(operator_mantisy >1)
        {
            premantissa[i] = '1';
            operator_mantisy = fmod(operator_mantisy,1);            
        }
        if(operator_mantisy == 1)
        {
            premantissa[i] = '1';            
        }
    }
    for(int i = 0; i<8;i++)
    {
        cout << exp[i];
    }
    cout << " ";
    for(int i = 0;i<przesuniencie_bias;i++)
    {
       ostateczna_tablica_char[i] = liczba[7-przesuniencie_bias + 1];
    }
    for(int i = 0; i <23;i++)
    {
        if((i + przesuniencie_bias) < 23)
        {
            ostateczna_tablica_char[i + przesuniencie_bias] = premantissa[i];
        }
    }
    for(int i = 0; i<23;i++)
    {
        cout << ostateczna_tablica_char[i];
    }
    cout << endl;
}
int main()
{
    int x = (1 << 2) * 16777216 + (1 << 4) * 65536 + (1 << 6) * 256 + (1 << 3);
    int y = (1 << 2) * 16777216 + (1 << 3) * 65536 + (1 << 6) * 256 + (1 << 4);
    cout <<"x: "<<x<<endl;
    cout <<"y: "<<y<<endl;
    //sprawdzenie;    
    x -= (1 << 4) * 65536 + (1<<3);
    x += (1 << 3) * 65536 + (1<<4);
    cout << "Wynik przestawienia: "<<x<<endl;
    float f = -2.3f;
    float test = 4.3f;
    floating_point(f);
    cout <<"##################################"<< endl;
    floating_point(test);
    cout << endl;
    //3
    cout <<"\245\251\206\253\276\242\210\344\230" << endl;    
}
