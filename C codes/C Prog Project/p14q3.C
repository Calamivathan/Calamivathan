#include<stdio.h>
void main()
{
int arr[5],i,num,count=0,j,temp;
char choice;
clrscr();
printf("Enter 5 Numbers=\n");
  for(i=0;i<5;i++)
  {
  scanf("%d",&arr[i]);
  }

printf("\nEntered Values:\n");
  for(i=0;i<5;i++)
  {
  printf("%d\t",arr[i]);
  }

printf("\n\nEnter number to be searched=");
scanf("%d",&num);
  for(i=0;i<5;i++)
  {
	if(num==arr[i])
	count++;
  }
	if(count>0)
	printf("%d is present",num);
	else
	printf("%d is not present",num);

printf("\n\nDo you want to sort these values? ('y' or 'n')\n=");
scanf(" %c",&choice);
	if(choice=='y')
	{
	  for(i=0;i<5;i++)
	  {
	    for(j=0;j<5;j++)
	    {
		if(arr[i]<arr[j])
		{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		}
	    }
	   }
	 printf("\nSorted Values:\n");
	   for(i=0;i<5;i++)
	  printf("%d\t",arr[i]);
	 }
getch();
}
