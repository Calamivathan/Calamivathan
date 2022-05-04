#include<stdio.h>
void main()
{
float c,f;
clrscr();
printf("\t\t\t\tCelsius To Fahrenheit\n\n");
printf("Enter temperature in Celsius=");
scanf("%f",&c);
f=(c*9/5)+32;
printf("\nTemperature in Fahrenheit=%.2f F",f);
getch();
}
