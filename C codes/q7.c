#include <stdio.h>
int fact(int);
int fibonacci(int);
void main()
{
    int num ,i,f;
    printf("\n  Enter any number=");
    scanf("%d",&num);
    printf("\n  factorial of number %d is %d",num,fact(num));
    printf("\n  fibonacci series of %d:",num);
     for(i=0;i<num;i++)
    {
        f=fibonacci(i);
        printf("\n %d",f);
    }
}
int fact(int n)
{
    if(n==1)
    return 1;
    else
    return n*fact(n-1);
}
int fibonacci(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else
    {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}
