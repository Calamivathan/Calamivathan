#include<stdio.h>
void main()
{
int n1=0,n2=1,n3,i,limit;
clrscr();
printf("Enter Limit=");
scanf("%d",&limit);
printf("Fibonacci Series\n");
printf("%d  %d  ",n1,n2);
	for(i=2;i<limit;i++)
	{
	n3=n1+n2;
	n1=n2;
	n2=n3;
	printf("%d  ",n3);
	}
getch();
}
