#include<stdio.h>
void fact(int);
void main()
{
int num;
clrscr();
printf("Enter No.=");
scanf("%d",&num);
fact(num);
getch();
}
void fact(int num)
{
int i,ans=1;
  for(i=1;i<=num;i++)
  ans=ans*i;
printf("Factorial of %d= %d",num,ans);
}

