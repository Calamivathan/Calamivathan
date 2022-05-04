#include<stdio.h>
int main()
{
    int num, ans, i;
    printf("Pls enter the number=");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        ans=i*i*i;
        printf("\ncube of %d is=%d",num,ans);
    }
}