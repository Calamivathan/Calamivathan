#include<stdio.h>
int sum(int a,int b);
void main()
{
    int a ,b,c;
    printf("enter two number to add");
    scanf("%d %d",&a,&b);
    c=sum(a,b);
    printf("\nsum= %d",c);
}
int sum(int a, int b)
{
    int sum=a+b;
    return sum;
}