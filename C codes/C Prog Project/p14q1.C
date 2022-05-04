#include<stdio.h>
void main()
{
int arr[10],i;
float sum=0;
clrscr();
printf("Enter 10 Numbers Below:\n");
  for(i=0;i<10;i++)
  {
    printf("Number %d:= ",i+1);
  scanf("%d",&arr[i]);
  sum+=arr[i];
  }
printf("Sum = %.0f",sum);
printf("\nAvg = %.2f",sum/10);
getch();
}

