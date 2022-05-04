#include<stdio.h>
int sum(int);
void main()
{
    int n,ans;
    printf("enter the limit=");
    scanf("%d",&n);
    ans=sum(n);
    printf("\nsum of n number=%d",ans);
}
int sum(int x)
{  int i,s=0;
    for(i=1;i<=x;i++)
    {
        s=s+i;
    }
return s;
}