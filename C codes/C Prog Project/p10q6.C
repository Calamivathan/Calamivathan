#include<stdio.h>
void main()
{
int num,i,count=0;
clrscr();
printf("Enter Number=");
scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		count++;
	}
if(count==2)
printf("%d is a Prime Number",num);
else
printf("%d is not a Prime Number",num);
getch();
}
