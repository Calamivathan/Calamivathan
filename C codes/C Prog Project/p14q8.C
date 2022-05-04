#include<stdio.h>
void main(){
int arr[3][3],i,j;
clrscr();
  for(i=0;i<3;i++){
  printf("Enter values for row %d :\n",i+1);
    for(j=0;j<3;j++){
    printf("Enter value for colum %d = ",j+1);
    scanf("%d",&arr[i][j]);
    }
  printf("\n");
  }
printf("Entered Values:\n"); //Printing
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
    printf("%d  ",arr[i][j]);
    }
  printf("\n"); 
  }
getch();
}
