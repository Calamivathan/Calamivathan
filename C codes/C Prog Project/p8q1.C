#include<stdio.h>
void main()
{
int c;
clrscr();
printf("\n  Press 1 to Print(Monday) so on till 7 for(sunday) Week Days : ");
scanf("%d",&c);
switch(c)
	{
	case 1:printf("  Monday\n");
	case 2:printf("  Tuesday\n");
	case 3:printf("  Wednesday\n");
	case 4:printf("  Thursday\n");
	case 5:printf("  Friday\n");
	case 6:printf("  Saturday\n");
	case 7:printf("  Sunday\n");
		break;
	default:printf("  Invalid Input" );
	}
getch();
}
