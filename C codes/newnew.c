#include<stdio.h>
int main()
{
    int i,limit,count,j;
    printf("enter any number");
    scanf("%d",&limit);
    printf("\nprime numbers are:");
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
            printf("\n %d",i);
        }
    }
    
}