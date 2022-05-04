#include<stdio.h>
int main()
{
    long int a,num,rev=0,rem;
    printf("enter the number=");
    scanf("%ld",&num);
    a=num;
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    printf("\nreverse of the number %ld is=%ld",a,rev);

}