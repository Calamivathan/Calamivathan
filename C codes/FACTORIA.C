#include<stdio.h>
int main()
{
int i,num,fact;
printf("enter the number");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
num=num*i;
}
printf("\n%d*%d=%d",num,i,fact);
}