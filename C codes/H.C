#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
float si, rate, time, pri;
char choice;
clrscr();
do
{
printf("enter the rate%f",rate);
scanf("%f",&rate);
printf("\nenter the time%f",time);
scanf("%f",&time);
printf("\nenter the pri%f",pri);
scanf("%f",&pri);
si=(rate*time*pri)/100;
printf("\nsimple interest=%f",si);
printf("\nto continue press y to stop press n");
scanf("%s",&choice);
}
while (choice=='y');
printf("no more enteries");
getch();
}