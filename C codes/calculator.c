#include<stdio.h>
int main()
{
float num1, num2;
char opp,choice;
float sum, minus, multiply, divide;
//sum=1, minus=2, multiply=3, divide=4;
jump:
printf("enter the value of num1=");
scanf("%f",&num1);
printf("\nenter the value of num2=");
scanf("%f",&num2);
printf("\nselect operation number you would like to do:\nEnter the Sign");
printf("\t\n1:+\t\n2:-\t\n3:*\t\n4:/\t\n5:%\nyour answer=");
scanf(" %c",&opp);
sum = num1+num2;

       if(opp =='+')
       {
	     printf("calculation with sum=%f",sum);
       }
minus = num1-num2;
	if(opp =='-')
       {
	     printf("calculation with minus=%f",minus);
       }
multiply=num1*num2;
	if(opp =='*')
       {
	     printf("calculation with multiply=%f",multiply);
       }
 divide = num1/num2;
	if(opp =='/')
       {
	     printf("calculation with divide=%f",divide);
       }
       printf("\ndo u want to do the calculation again 'Y'/'N'  OR   'y'/'n' \t");
       scanf(" %c",&choice);
       if(choice=='y' || choice=='Y')
       {
           goto jump;
       }
       if(choice=='N' || choice=='n')
       {
           printf("bye");
       }
}