#include <iostream>
using namespace  std;
void hanoi(unsigned short int n, char przenosze_Z, char bufor,char cel)
{
  if (n==0)
  	return;
  hanoi(n-1, przenosze_Z, cel, bufor);
  cout << przenosze_Z << " -> " << cel << endl;
  hanoi(n-1, bufor, przenosze_Z, cel);  
}
int main()
{
    hanoi(2, '1', '2', '3');
}