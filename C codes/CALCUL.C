#include<stdio.h>
int main()
{
float num1, num2;
char opp;
float sum, minus, multiply, divide;
//sum=1, minus=2, multiply=3, divide=4;
printf("enter the value of num1=");
scanf("%f",&num1);
printf("\nenter the value of num2=");
scanf("%f",&num2);
printf("\nselect operation number you would like to do:");
printf("\t\n1:+\t\n2:-\t\n3:*\t\n4:/\nyour answer=");
scanf(" %c",&opp);
sum = num1+num2;

       if(opp =='+')
       {
	     printf("calculation with sum=%lf",sum);
       }
minus = num1-num2;
	if(opp =='-')
       {
	     printf("calculation with minus=%lf",minus);
       }
multiply=num1*num2;
	if(opp =='*')
       {
	     printf("calculation with multiply=%lf",multiply);
       }
 divide = num1/num2;
	if(opp =='/')
       {
	     printf("calculation with divide=%lf",divide);
       }
}