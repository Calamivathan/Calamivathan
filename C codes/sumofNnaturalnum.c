#include<stdio.h>
int main()
{
    int num,sum=0,n;
    printf("pls enter the limt=");
    scanf("%d",&n);
    for(num=1;num<=n;num++)
    {
        sum=sum+num;
        printf("%d ",num);
    }
    printf("\nsum of n natural number=%d",sum);
}