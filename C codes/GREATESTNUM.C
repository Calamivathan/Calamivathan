#include<stdio.h>
int main()
{
long int num1,num2,num3;
 printf("pls enter the num1=");
 scanf("%ld",&num1);
 printf("pls enter the num2=");
 scanf("%ld",&num2);
 printf("pls enter the num3=");
 scanf("%ld",&num3);
   if(num1>num2 && num1>num3)
  {
      printf("num1 is the greatest number %ld",num1);
  } 
  else if(num2>num1 && num2>num3)
  {
      printf("num2 is the greatest number %ld",num2);
  } 
  else if (num3>num2 && num3>num2)
  {
      printf("num1 is the greatest number %ld",num3);
  }
}