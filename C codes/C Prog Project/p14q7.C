#include<stdio.h>
void main(){
int arr[30],size,i,j,swap;
clrscr();
printf("Enter No. of Elements for the Array = ");
scanf("%d",&size);
printf("Enter %d Elements Below :\n",size);
  for(i=0;i<size;i++)
  scanf("%d",&arr[i]);
printf("Your Input :\n"); //Printing
  for(i=0;i<size;i++)
  printf("%d\t",arr[i]);
  for(i=0;i<size-1;i++){ 
    for(j=0;j<size-i-1;j++){
	if(arr[j]>arr[j+1]){
	swap=arr[j];
	arr[j]=arr[j+1];
	arr[j+1]=swap;
	}
    }
  }
printf("\nSorted List in Ascending Order :\n");
  for(i=0;i<size;i++)
  printf("%d\t",arr[i]);
getch();
}
