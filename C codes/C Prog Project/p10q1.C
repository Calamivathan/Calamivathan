#include<stdio.h>
void main()
{
int num,digit,reverse=0;
clrscr();
printf("\n  Enter No=");
scanf("%d",&num);
printf("  %d in reverse = ",num);
  do{
  digit=num%10;
  reverse=(reverse*10)+digit;
  num=num/10;
  }while(num!=0);
printf("%d",reverse);
getch();
}
