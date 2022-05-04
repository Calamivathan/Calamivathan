#include<stdio.h>
void tab();
int num;
void main()
{
clrscr();
printf("Enter No.=");
scanf("%d",&num);
tab();
getch();
}
void tab()
{
int i;
  for(i=1;i<=10;i++)
  printf("%d x %d = %d\n",num,i,num*i);
}
