#include<stdio.h>
int great(int,int);
void main()
{
int n1,n2;
clrscr();
printf("Enter  Num 1 = ");
scanf("%d",&n1);
printf("Enter  Num 2 = ");
scanf("%d",&n2);
	if(great(n1,n2)==1)
	printf("%d > %d",n1,n2);
	else if(great(n1,n2)==0)
	printf("%d = %d",n1,n2);
	else
	printf("%d < %d",n1,n2);
getch();
}
int great(int n1,int n2)
{
	if(n1>n2)
	return 1;
	else if(n1==n2)
	return 0;
	else
	return 2;
}
