#include<conio.h>
#include<stdio.h>
void main()
{
long int num,r,bin,place;
r=0;
bin=0;
place=1;
clrscr();
printf("enter the num=");
scanf("%ld",&num);

while(num!=0)
{
r=num%2;
num=num/2;
bin=bin+(r*place);
place=place*10;
}
printf("\n%ld",bin);
getch();
}