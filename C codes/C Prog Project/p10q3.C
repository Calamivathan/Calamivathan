#include<stdio.h>
void main()
{
int x,i;
clrscr();
printf("Enter Number=");
scanf("%d",&x);
  for(i=1;i<=10;i++)
  printf("%d x %d = %d\n",x,i,x*i);
getch();
}
