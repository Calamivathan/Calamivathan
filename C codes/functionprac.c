#include<stdio.h>
void swap(int,int);
void main()
{
    int ans,a=10,b=20;
    //ans= sum (num,num1);
    
    printf("inside main function:before swapping a=%d b=%d",a,b);
    swap(a,b);
    printf("\nin pside main function:after swapping a=%d, b=%d"ans);
}
void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("\ninside swap function:after swapping a=%d b=%d",a,b);
}

