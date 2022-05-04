#include<stdio.h>
int main()
{
    int num,sum=0,i;
    printf("enter the number of terms=");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        printf("\neven number are %d",2*i);
        sum=sum +2*i;
    }
    printf("\nsum of even number=%d",sum);
}