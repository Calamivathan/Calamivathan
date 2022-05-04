#include<stdio.h>
int main ()
{
long int i,limit,num=1,j;
printf("enter the number");
scanf("%ld",&limit);
for(i=1;i<=limit;i++)
     {
	for(j=1;j<=(limit-i+1);j++)
	{	
	printf("%ld",num);
	num++;
	}
	printf("\n");
	}
}