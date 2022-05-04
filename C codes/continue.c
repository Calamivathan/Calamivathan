#include<stdio.h>
#include<stdlib.h>
int main ()
{
long int i,j,k;
for(i=1;i<=10;i++)
     {
	if(i==5)
	{
    continue;
    }
	printf("%ld  ",i);
	}
    for(j=1;j<=10;j++)
     {
	if(j==5)
	{
    break;
    }
	printf("%ld",j);
	}
	for(k=1;k<=10;k++)
     {
	if(k==5)
	{
    exit(255);
    }
	printf("%ld",k);
	}
}