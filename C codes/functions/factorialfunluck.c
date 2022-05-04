#include <stdio.h>
long double fact(int n)
{
    printf("in function value of n =%Lf",n);
if (n==1)
return 1;
else
return n*fact(n-1);
}
int main()
{
long double ans,n;
printf("Enter any positive number");
scanf("%Lf",&n);
printf("value of n =%Lf",n);
ans=fact(n);
printf("factorial of number %Lf is %Lf",n,ans);
}