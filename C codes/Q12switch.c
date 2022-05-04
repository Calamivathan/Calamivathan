#include<stdio.h>
int main()
{
    int choice;
    printf("Press 1: For armstrong Number\nPress 2: For Calculator\nPress 3: For printing reverse integer number");
    scanf("%d",&choice);
    switch(choice)
{
case '1':
    int num, cube, sum, rem,limit,temp;
    printf("Armstrong No.");
    printf("\n Enter limit=");
    scanf("%d", &limit);
    for(num=1;num<=limit;num++)
    {
        temp=num;
        sum=0;
            while(temp!=0)
            {
                rem=temp%10;
                cube=rem*rem*rem;
                sum=sum+cube;
                temp=temp/10;
            }
            if(sum==num)
            {
                printf("\n %d is an armstrong no.", num);
            }
    }
    break;
case '2':
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
           exit(1);
       }
       break;
case '3':
    long int a,num,rev=0,rem;
    printf("enter the number=");
    scanf("%ld",&num);
    a=num;
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    printf("\nreverse of the number %ld is=%ld",a,rev);
    break;
}
}