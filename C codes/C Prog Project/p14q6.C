#include<stdio.h>
void main(){
int arr[30],size,i,num,first,last,mid;
clrscr();
printf("Enter No. of Elements for the Array : ");
scanf("%d",&size);
printf("Enter %d Numbers Below in Ascending Or Descending Order Only:\n",size);
  for(i=0;i<size;i++)
  scanf("%d",&arr[i]);
printf("Your Input:\n");
  for(i=0;i<size;i++)
  printf("%d\t",arr[i]);
printf("\n\nEnter No. to be Searched : ");
scanf("%d",&num);
first=0; last=size-1; mid=(first+last)/2;
  while(first<=last){
	if(arr[mid]<num)
	first=mid+1;
	else if(arr[mid]==num){
	printf("%d found at location %d",num,mid+1);
	break;}
	else
	last=mid-1;
  mid=(first+last)/2;}
	if(first<last)
	printf("\n%d not found",num);
getch();
}
