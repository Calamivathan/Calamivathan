#include<stdio.h>
void main()
{
int a,b,c;
clrscr();
printf("\n  Enter No.1=");
scanf("%d",&a);
printf("  Enter No.2=");
scanf("%d",&b);
printf("  Enter No.3=");
scanf("%d",&c);
printf("----------------------------------");
printf("\n  Num1=%d\tNum2=%d\tNum3=%d",a,b,c);
printf("\n--------------------------------");
	if(a>b && a>c)
	{
	printf("\n  %d is the greatest",a);
	}
	else if(b>a && b>c)
	{
	printf("\n  %d is the greatest",b);
	}
	else if(c>a && c>b)
	{
	printf("\n  %d is the greatest",c);
	}
getch();
}
