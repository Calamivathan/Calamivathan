#include<stdio.h>
void main()
{
int yr;
clrscr();
printf("\n  Enter a year =");
scanf("%d",&yr);
	if((yr%4==0)&&(yr%100!=0)|| (yr%400==0))
	printf("  Yes, %d is a Leap Year",yr);
	else
	printf("  No, %d is not a Leap Year",yr);
	getch();
}
