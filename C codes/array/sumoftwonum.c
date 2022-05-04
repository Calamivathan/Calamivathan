#include<stdio.h>
void main()
{
    int aalu[2];
    int i,sum=0;
    for(i=0;i<2;i++)
    {
        printf("enter the num%d=",i);
        scanf("%d",&aalu[i]);
    }
    for(i=0;i<2;i++)
   {
    sum+=aalu[i];
    }
    printf("value of num1=%d \n value of num2=%d",aalu[0],aalu[1]);
    printf("\nsum=%d",sum);
}