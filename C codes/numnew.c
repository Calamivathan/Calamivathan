#include<stdio.h>
int main()
{
    int i,num,count=0;
    printf("enter any number");
    scanf("%d",&num);
    for(i=2;i<=num;i++)
    {
        if(num%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("prime number %d",num);
    }
    else
    {
        printf("not a prime number");
    }
}