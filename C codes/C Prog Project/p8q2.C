#include<stdio.h>
void main()
{
float num1, num2;
char opp,choice;
float sum, minus, multiply, divide, percentage, average;
clrscr();
jump:
printf("\n  enter the value of num1=");
scanf("%f",&num1);
printf("\n  enter the value of num2=");
scanf("%f",&num2);
printf("\n  select operation number you would like to do:\nEnter the Sign");
printf("\t\n1:+ for plus\t\n2:- for minus\t\n3:* for multiply\t\n4:/ for divide\t\n5:%% for percentage \t\n6:use 'a/A' for Average \nyour answer=  ");
scanf(" %c",&opp);
switch(opp)
    {
        case '+':
            sum = num1+num2;
	        printf("\n  sum=%f",sum);
        break;
        case '-':
            minus = num1-num2;
	        printf("\n  minus=%f",minus);
        break;
        case '*':
            multiply=num1*num2;
	        printf("\n  multiply=%f",multiply);
        break;
        case '/':
            divide = num1/num2;
	        printf("\n  divide=%f",divide);
        break;
        case '%':
            percentage = ((num1+num2)/200)*100;
	        printf("\n  percentage=%f",percentage);
        break;
        case 'a':
            average = (num1+num2)/2;
	        printf("\n  average=%f",average);
        break;
        case 'A':
            average = (num1+num2)/2;
	        printf("\n  average=%f",average);
        break;
    }
       printf("\n  do u want to do the calculation again 'Y'/'N'  OR   'y'/'n' \t");
       scanf(" %c",&choice);
       if(choice=='y' || choice=='Y')
       {
           goto jump;
       }
       if(choice=='N' || choice=='n')
       {
           printf("  biee bieeeee :)");
       }
	   getch();
}