#include<stdio.h>
void main()
{
    int n,i,flag,num,temp,j;
    printf("enter the limit=");
    scanf("%d",&n);
    int aalu[n];
    for(i=0;i<n;i++)
    {
        printf("\nenter num%d=",i+1);
        scanf("%d",&aalu[i]);
    }
    printf("\nenter the number to find=");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        if(num==aalu[i])
        {
            flag=0;
            break;
        }
        else
        {
            flag=1;
        }
    }
    printf("\n----------------------------------------------------------------------------------------------------------");
    if(flag==0)
    {
        printf("\nnumber is found");
    }
    else
    {
        printf("\nnumber is not found");
    }
    printf("\n----------------------------------------------------------------------------------------------------------");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(aalu[i]<aalu[j])
            {
                temp=aalu[i];
                aalu[i]=aalu[j];
                aalu[j]=temp;
            }
        }
    }
    printf("\n values are sorted");
    for(i=0;i<n;i++)
    {
        printf("\nnumber of index%d=%d",i+1,aalu[i]);
    }
}