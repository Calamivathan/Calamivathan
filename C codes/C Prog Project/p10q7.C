#include<stdio.h>
void main()
{
int n,i;
float sum=0;
clrscr();
printf("Enter n : ");
scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
	if(i==n)
	printf("1/%d",i);
	else
	printf("1/%d + ",i);
  sum+=(float)1/i;
  }
printf("\nSum = %.2f",sum);
getch();
}