#include<stdio.h>
void main()
{
int i,x;
long int fact=1;
clrscr();
printf("Enter Number=");
scanf("%d",&x);
for(i=x;i>=1;i--)
{
fact=fact*i;
}
printf("Factorial of %d = %ld",x,fact);
getch();
}
