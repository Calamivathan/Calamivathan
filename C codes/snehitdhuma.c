#include<stdio.h>
int main()
{
double num,point;
long int front,point1;
int i,j=1,k;
printf("Enter No.(in binary)=");
scanf("%lf",&num);
printf("no.=%lf",num);
front=num;
point=num-front;
printf("\nfront=%ld",front);
printf("\npoint=%lf\n",point);
for(i=1;i<=14;i++)
{
j++;
point=point*10;
point1=point;
if(j==0)
{
printf("%ld\n",point1);
}
else
{
k=point1%10;
printf("%d\n",k);
}
}
}