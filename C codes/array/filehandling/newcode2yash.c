#include<stdio.h>
int fibonacci(int);
void main()
{
    int num,i,fibo;
    printf("Enter a number : ");
    scanf("%d", &num);
    for(i=0;i<num;i++)
    {
        fibo=fibonacci(i);
        printf("    %d",fibo);
    }
}
int fibonacci(int i)
{
    if(i==0)
    return 0;
    else if(i==1)
    return 1;
    else
    return (fibonacci(i-1)+fibonacci(i-2));
}