#include<stdio.h>
void main()
{
int n,i,temp=1,sum=0;
clrscr();
printf("\n  Enter n = ");
scanf("%d",&n);
printf("\n  Series 1:\n");
  for(i=1;i<=n;i++)
  {
	if(i==n)
	printf("  %d",i);
	else
	printf("  %d + ",i);
  sum+=i;
  }
printf("\n  Sum = %d\n",sum);sum=0;
printf("\n\n  Series 2:\n");
  for(i=1;i<=n;i++)
  {
  sum+=temp;
	if(i==n)
	printf("  %d",temp);
	else
	{
	printf("%d + ",temp);
	temp+=2;
	}
  }
printf("\nSum = %d\n",sum);sum=0;
printf("\n\nSeries 3:\n");
  for(i=n;i>=1;i--)
  {
	if(i==1)
	printf("%d",i);
	else
	printf("%d + ",i);
  sum+=i;
  }
printf("\nSum = %d",sum);
getch();
}
