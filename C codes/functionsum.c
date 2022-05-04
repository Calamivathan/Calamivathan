#include<stdio.h>
int sum(int,int);
int main()
{
    int ans;
    ans= sum (8,9);
    printf("sum=%d",ans);
}
int sum(int x, int y)
{
    int add;
    add = x+y;
    return add;
}

