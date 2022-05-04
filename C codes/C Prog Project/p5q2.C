#include<stdio.h>
void main()
{
int a=69,b=96,temp;
clrscr();
//Using third variable
temp=a;
a=b;
b=temp;
printf("\n  a = %d\tb = %d",a,b);
//Without using third variable
a=a+b;
b=a-b;
a=a-b;
printf("\n\n  a = %d\tb = %d",a,b);
getch();
}
