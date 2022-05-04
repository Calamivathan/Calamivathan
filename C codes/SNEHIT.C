#include<stdio.h>
#include<conio.h>
void main()
{
float x;
char choice;
clrscr();
do{
printf("Enter Number=");
scanf("%f",&x);
if(x>0)
{
printf("%.3f is positive",x);
}
else if(x<0)
{
printf("%.3f is negative",x);
}
else if(x==0)
{
printf("%.2f=0",x);
}
printf("\nPress 'y' to continue or 'n'to exit=");
scanf(" %c",&choice);
printf("\n----------------------------------------\n");
}while(choice=='y'|| choice=='Y');
printf("Kbye");
getch();
}