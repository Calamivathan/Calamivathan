#include<stdio.h>
void main()
{
    int num,sum,num1=0,num2=1,i;
    printf("enter the limit\n");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        sum = num1+num2;
        num1=num2;
        num2=sum;
    }
    printf("\n%d",num1);
}