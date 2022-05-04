#include<stdio.h>
void main()
{
int num,i,j,rows;
clrscr();
printf("Enter No. from where you want to start=");
scanf("%d",&num);
printf("Enter no. of rows=");
scanf("%d",&rows);
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=i;j++)
		{
		printf("%d\t",num);
		num++;
		}
	printf("\n");
	}
getch();
}
