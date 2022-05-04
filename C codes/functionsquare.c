#include<stdio.h>
int squ(int);
int main()
{
    int ans,num;
    printf("enter the num=");
    scanf("%d",&num);
    ans= squ (num);
    
    printf("square=%d",ans);
}
int squ(int x)
{
    int ans;
    ans = x*x;
    return ans;
}

