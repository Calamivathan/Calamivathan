#include<stdio.h>
void main()
{
int arr[50],i;
float sum=0;
clrscr();
  for(i=0;i<50;i++)
  {
  printf("Enter Marks of Student%d=",i+1);
  scanf("%d",&arr[i]);
  sum=sum+arr[i];
   }
printf("Average marks of the class = %.2f",sum/50);
getch();
}
