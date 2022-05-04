#include<stdio.h>
#include<conio.h>
int main()
{
long int i,num,count=0;
printf("pls enter the number");
scanf("%ld",&num);
for(i=1;i<=num;i++)
{
	if(num%i==0)
	{
	count ++;
	}
}
      if(count==2)
      {
	printf("\n%ld is a prime number=",num);
	 }
	 else
	 {
	 printf("\n%ld is not a prime number",num);
	 }
}