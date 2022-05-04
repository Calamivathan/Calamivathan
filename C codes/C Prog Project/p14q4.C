#include<stdio.h>
void main()
{
int arr[30],max,size,i;
clrscr();
printf("Enter size of the Array:\n");
scanf("%d",&size);
printf("Enter %d Numbers:\n",size);
  for(i=0;i<size;i++)
  scanf("%d",&arr[i]);
//Printing
printf("Your Input:\n");
  for(i=0;i<size;i++)
  printf("%d\t",arr[i]);
max=arr[0];
  for(i=1;i<size;i++)
  {
	if(arr[i]>max)
	max=arr[i];
  }
printf("\nMaximum Element in the Array = %d",max);
getch();
}
