#include<stdio.h>
void main()
{
float basic,hra,da;
clrscr();
printf("\n  Enter a basic salary: ");
scanf("%f",&basic);
	if(basic<=10000)
	{
	hra=(basic*8)/100;
	da=(basic*10)/100;
	}
	else if(basic<=20000)
	{
	hra=(basic*16)/100;
	da=(basic*20)/100;
	}
	else
	{
	hra=(basic*24)/100;
	da=(basic*30)/100;
	}
printf("  Gross Salary= %.2f",basic+hra+da);
getch();
}
