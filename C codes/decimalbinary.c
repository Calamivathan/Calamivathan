#include<stdio.h>
int main()
{
long int num,ans,y;
printf("enter the number");
scanf("%ld",&num);
while(num!=0)
{
	ans=num%2;
	printf("%ld",ans);
	y=num/2;
	num=y;
}
}