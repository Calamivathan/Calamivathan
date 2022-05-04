int main() {
int num1,num;
printf("press 1 for square\n");
printf("press 2 for cube\n");
scanf("%d",&num);
printf("enter your number");
scanf("%d",&num1);
switch(num)
{
case 1: printf("%d*%d=%d",num1,num1,num1*num1);
break;
case 2:printf("%d*%d*%d=%d",num1,num1,num1,num1*num1*num1);
break;
default: printf("\nenter correct number");
}
return 0;
}