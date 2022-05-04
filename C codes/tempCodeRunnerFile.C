#include<stdio.h>
void main()
{
    int Year;
    printf("Enter no :",Year);
    scanf("%d",&Year);
    if(Year%4==0)
    {
        printf(" LEAP YEAR");
    }
    else
    {
        printf("not a LEAP YEAR");
    }
    printf("\n %d",Year);
}