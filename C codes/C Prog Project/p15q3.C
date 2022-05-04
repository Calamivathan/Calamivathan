#include<stdio.h>
void main()
{
int num,digit,rev=0,*ptr;
clrscr();
printf("Enter a Number : ");
scanf("%d", &num);
ptr=&num;
while(*ptr>0){
digit=*ptr%10;
rev=rev*10+digit;
*ptr/=10;
}
printf("Reverse = %d",rev);
getch();
}
