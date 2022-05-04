#include<stdio.h>
void main(){
int arr[30],size,i,num,count=0;
clrscr();
printf("Enter size of the Array : ");
scanf("%d",&size);
printf("Enter %d Numbers Below:\n",size);
  for(i=0;i<size;i++)
  scanf("%d",&arr[i]);
printf("Your Input:\n");
  for(i=0;i<size;i++)
  printf("%d\t",arr[i]);
printf("\nEnter No. to be Searched : ");
scanf("%d",&num);
  for(i=0;i<size;i++){
	if(num==arr[i])
	{
	count=1;
	break;
	}
  }
	if(count==1)
	printf("Found\n%d is the %d element entered by you",num,i+1);
	else
	printf("%d Not Found",num);
getch();
}
