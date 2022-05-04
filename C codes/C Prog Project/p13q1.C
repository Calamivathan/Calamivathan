#include<stdio.h>
int fact(int);
void main()
{
int n;
clrscr();
printf("Enter No.=");
scanf("%d",&n);
printf("Factorial= %d",fact(n));
getch();
}
int fact(int n)
{
	if(n==1)
	return 1;
	else if(n==0)
	return 0;
	else
	return n*fact(n-1);
}
