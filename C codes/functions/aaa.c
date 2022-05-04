#include <stdio.h>

long double fact(int n)
{
    if (n==1)
    return 1;
    else 
    return n*fact(n-1);
}

int main()
{
    long double n;
    printf("Enter any positive number");
    scanf("%Lf",&n);
    printf("factorial of number %Lf is %.0Lf",n,fact(n));
}