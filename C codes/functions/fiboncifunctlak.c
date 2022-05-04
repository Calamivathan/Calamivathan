#include <stdio.h>
int fibonacci(int);
void main()
{
int num ,i,f;
printf("enter value of number ");
scanf("%d",&num);
for(i=0;i<num;i++)
{
f=fibonacci(i);
printf("\n %d",f);
}
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