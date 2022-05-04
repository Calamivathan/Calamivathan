#include<stdio.h>
int odd(int);
int main()
{
    int num;
    printf("enter the number=");
    scanf("%d",num);
    ans=odd(num);
    printf("%d",ans);
}
int odd(int num)
{
    int ans;
    if(num%2==0)
    {
        printf("\nthe num:%d is even",num);
    }
    else 
    {
        printf("\nthe num:%d is odd",num);
    }
    return ans;
}