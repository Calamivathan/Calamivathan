#include<stdio.h>
int main ()
{
long int i,n,num=1,j;
printf("enter the number");
scanf("%ld",&n);
for(i=1;i<=n;i++)
     {
	for(j=1;j<=i;j++)
	{
	printf("%ld   ",num);
	num++;
	}
	printf("\n");
	}
}