#include<stdio.h>
int main()
{
    int i,num,sum=0,n=9;
    printf("enter the limit=");
    scanf("%d",&num);
    printf("\n");
    for(i=1;i<=num;i++)
    {
        sum+=n;
        printf("%d + ",n);
        n=n*10+9;
    }
    printf("\nsum of the series=%d",sum);
}