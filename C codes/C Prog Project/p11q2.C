#include<stdio.h>
void swap(int,int);
void main()
{
int a=69,b=96;
clrscr();
printf("Before: a= %d b= %d",a,b);
swap(a,b);
getch();
}
void swap(int a,int b)
{
int temp=a;
a=b;
b=temp;
printf("\nAfter : a= %d b= %d",a,b);
}
