#include<stdio.h>
int main()
{
    int num, cube, sum, rem,limit,temp,ch,count,j,i,rev=0;
    printf("press 1 for Armstrong No.\n");
    printf("press 2 for prime No.\n");
    printf("press 3 for reverse No.\n");
    scanf("%d", &ch);
switch(ch)
{
    case 1:
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
    case 2:
             printf("enter the limit for prime number=");
         scanf("%d",&limit);
         printf("\nprime number are:");
    
    for(i=1;i<=limit;i++)
    {
        count=0;
    for(j=1;j<=limit;j++)
    {
        if(i%j==0)
        {
            count++;
        }
    }
        if(count==2)
        {
            printf("\n%d",i);
        }
    }
        break;
    case 3:
    printf("enter any number=");
         scanf("%d",&num);
    
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    printf("\n reverse of a number is=%d",rev);

    break;
}
}