#include<stdio.h>
int main()
{
    long int i, sum=0, n;
    printf("pls enter the number of terms=");
    scanf("%ld",&n);
    printf("\n%ld odd number are=",n);
    for(i=1;i<=n;i++)
    {
        
        printf("%ld, ",2*i-1);
        sum=sum+2*i-1;
    }
    printf("\nsum of odd numbers is =%ld",sum);
}