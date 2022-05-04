#include<stdio.h>
void main()
{
int a,b,*ptr1,*ptr2;
clrscr();
printf("Enter 2 Numbers : ");
scanf("%d\t%d",&a,&b);
ptr1=&a;ptr2=&b;
printf("Sum : %d + %d = %d\n",*ptr1,*ptr2,*ptr1 + *ptr2);
getch();
}
