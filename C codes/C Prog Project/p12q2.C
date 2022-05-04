#include<stdio.h>
void main()
{
int a,b,*ptr1,*ptr2;
clrscr();
printf("Enter Number 1 : ");
scanf("%d",&a);
printf("Enter Number 2 : ");
scanf("%d",&b);
ptr1=&a;ptr2=&b;
printf("Addition        : %d + %d = %d\n",*ptr1,*ptr2,*ptr1 + *ptr2);
printf("Subtraction     : %d - %d = %d\n",*ptr1,*ptr2,*ptr1 - *ptr2);
printf("Multiplication  : %d x %d = %d\n",*ptr1,*ptr2,*ptr1 * *ptr2);
printf("Division        : %d / %d = %d",*ptr1,*ptr2,*ptr1 / *ptr2);
getch();
}
