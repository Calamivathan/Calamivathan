#include<stdio.h>
int main()
{
    long int num, i, ans, till;
    printf("enter the number to see its table=");
    scanf("%ld",&num);
    printf("\ntill where do u want to see its table=");
    scanf("%ld",&till);
    for(i=1;i<=till;i++)
    {
        ans=num*i;
        printf(" %ldX%ld=%ld,",num,i,ans);
    }
}