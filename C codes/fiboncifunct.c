#include<stdio.h>
int fib(int);
void main()
{
    int num,sum;
    printf("enter the number=");
    scanf("%d",num);
    fib(num);
    //printf("\nfibonci=%d",sum);
}
int fib(int num)
{
    int i,sum,num1=0,num2=1;
    for(i=1;i<=num;i++)
    {
        sum=num1+num2;
        num2=sum;
        num1=num2;
        printf("\t%d",num1);
    }
    
}