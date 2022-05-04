#include<stdio.h>
int main()
{
    int num,i,fac=1;
    printf("enter the number to get fectorial=");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        fac=fac*i;
        printf("\nfactorial of %d=%d",num,fac);
    }
}
