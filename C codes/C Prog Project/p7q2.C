#include<stdio.h>
int main()
{
int a,b,max;
clrscr();
printf("\n  Enter Two Numbers Below:\n");
scanf("%d%d",&a,&b);
max=(a>b)?a:b;
printf("  %d is the Greatest",max);
getch();
}
