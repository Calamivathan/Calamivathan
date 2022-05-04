#include<stdio.h>
void main()
{
int num,i,j,temp,digit,sum=0,choice;
clrscr();
printf("Press 1 for Armstrong Numbers\n");
printf("Press 2 to Reverse a Number\n");
printf("Press 3 for Prime Numbers\n");
printf("Your choice=");
scanf("%d",&choice);
switch(choice)
	{
	case 1:printf("Enter limit=");
		scanf("%d",&num);
		  for(i=0;i<=num;i++)
		  {
		  temp=i;
		  sum=0;
			while(temp!=0)
			{
			digit=temp%10;
			digit=digit*digit*digit;
			sum=sum+digit;
			temp/=10;
			}
		  if(sum==i)
		  printf("%d\t",i);
		  }
		  break;
	case 2:printf("Enter No.=");
		scanf("%d",&num);
		  do{
		  digit=num%10;
		  sum=(sum*10)+digit;
		  num/=10;
		  }while(num!=0);
		printf("%d",sum);
		break;
	case 3:printf("Enter limit=");
		scanf("%d",&num);
		  for(i=1;i<=num;i++)
		  {
		  temp=0;
			for(j=1;j<=i;j++)
			{
				if((i%j)==0)
				temp++;
			}
		  if(temp==2)
		  printf("%d\t",i);
		  }
		  break;
	default:printf("Invalid Input");break;
	}
getch();
}
