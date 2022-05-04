#include<stdio.h>
void main()
{
int p,r,t;
float s;
clrscr();
printf("Enter Principle=");
scanf("%d",&p);
printf("Enter Rate of Interest=");
scanf("%d",&r);
printf("Enter Time(in yrs)=");
scanf("%d",&t);
s=(float)(p*r*t)/100;
printf("Simple Interest=%.3f",s);
getch();
}
