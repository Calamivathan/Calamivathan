#include<stdio.h>
int main()
{
    int num,sum=0;
    for(num=1;num<=10;num++)
    {
        sum=sum+num;
        printf("%d ",num);
    }
    printf("\n sum of natural number=%d",sum);
}