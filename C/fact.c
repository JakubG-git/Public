#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int fact(int n);

int main(void)
{
    unsigned int number;
    printf("Podaj liczbe: ");
    if (scanf("%u", &number))
    {
        printf("%i\n",fact(number));
    }
}

int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * fact(n-1);    
}