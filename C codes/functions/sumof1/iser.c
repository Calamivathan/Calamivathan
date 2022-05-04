#include<stdio.h>
void main()
{
int i=1,n;
float sum;
printf("\nEnter the value of n: ");
scanf("%d",&n);
while(i<=n)
{
	sum=sum+(1/(float)i);
	i++;
}
printf("\nSum upto n:%f",sum);
}