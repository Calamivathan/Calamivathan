#include<stdio.h>
int main()
{
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
}