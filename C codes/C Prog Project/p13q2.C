#include<stdio.h>
int fibonacci(int);
void main()
{
int i,num;
clrscr();
printf("Enter n=" );
scanf("%d",&num);
  for(i=0;i<num;i++)
  {
  printf("%d\t",fibonacci(i));
  }
getch();
}
int fibonacci(int n)
{
	if(n==0)
	return 0;
	else if(n==1)
	return 1;
	else
	return fibonacci(n-1)+fibonacci(n-2);
}
