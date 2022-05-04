#include<stdio.h>
int main()
{
    int choice;
    int num3, cube, sum1, rem,limit,temp;
    int i,limit1,count,j;
    long int a,num1,rev=0,rem1;
    printf("Press 1: For armstrong Number\nPress 2: For Prime number\nPress 3: For printing reverse integer number\nEnter your choice=");
    scanf("%d",&choice);
    switch(choice)
{
case 1:printf("\nArmstrong No.");
    printf("\n Enter limit=");
    scanf("%d", &limit);
    for(num3=1;num3<=limit;num3++)
    {
        temp=num3;
        sum1=0;
            while(temp!=0)
            {
                rem=temp%10;
                cube=rem*rem*rem;
                sum1=sum1+cube;
                temp=temp/10;
            }
            if(sum1==num3)
            {
                printf("\n %d is an armstrong no.", num3);
            }
    }
break;
case 2:printf("enter any number");
    scanf("%d",&limit1);
    printf("\nprime numbers are:");
    for(i=1;i<=limit1;i++)
    {
        count=0;
        for(j=1;j<=limit1;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==2)
        {
            printf("\n %d",i);
        }
    }
break;
case 3:printf("\nEnter the number=");
    scanf("%ld",&num1);
    a=num1;
    while(num1!=0)
    {
        rem1=num1%10;
        rev=rev*10+rem1;
        num1=num1/10;
    }
    printf("\nreverse of the number %ld is=%ld",a,rev);
    break;
}
}