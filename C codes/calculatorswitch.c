#include<stdio.h>
int main()
{
int n1,n2,result,choice;
printf("Enter 1st number=");
scanf("%d",&n1);
printf("Enter 2nd number=");
scanf("%d",&n2);
printf("press 1 for add");
printf("\npress 2 for sub");
printf("\npress 3 for mul");
printf("\npress 4 for div");
printf("\npress 5 for mod");
scanf("%d",&choice);
switch(choice)
{
case 1: result=n1+n2;
printf("\nadd=%d",result);
break;
case 2: result=n1-n2;
printf("sub=%d",result);
break;
case 3: result=n1*n2;
printf("mul=%d",result);
break;
case 4: result=n1/n2;
printf("div=%d",result);
break;
case 5: result=n1%n2;
printf("mod=%d",result);
break;
}
}