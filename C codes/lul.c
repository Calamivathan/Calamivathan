int rect(int,int); //function declaration or prototype
#include <stdio.h>
int main()
{
int ans,l,b;
printf("enter any number1:");
scanf("%d",&l);
printf("enter any number2:");
scanf("%d",&b);
ans=rect(a,c); //function call
printf("square of given number is=%d",ans);
}
int rect(int l ,int b) //function defination
{
int ans=l*b;
return ans;
}