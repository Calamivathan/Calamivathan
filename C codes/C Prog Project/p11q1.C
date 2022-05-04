#include<stdio.h>
int sqr(int);
void main()
{
int x;
clrscr();
printf("Enter No.=");
scanf("%d",&x);
printf("Square of %d = %d",x,sqr(x));
getch();
}
int sqr(int x)
{
return x*x;
}
