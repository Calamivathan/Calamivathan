#include<stdio.h>
void main()
{
int arr[20][20],arr1[20][20],i,j,k,row,col;//sum[20][20];
clrscr();
printf("Enter no. of rows and columns for the matrix:\n");
scanf("%d %d",&row,&col);
  for(k=1;k<=2;k++)
  {
  printf("Matrix %d\n",k);
    for(i=0;i<row;i++)
    {
    printf("Row %d:\n",i+1);
      for(j=0;j<col;j++)
      {
      printf("Enter Element No.%d=",j+1);
	if(k==1)
	scanf("%d",&arr[i][j]);
	else
	scanf("%d",&arr1[i][j]);
      }
    }
  }
printf("\nSum:\n");
  for(i=0;i<row;i++)
  {
    for(j=0;j<col;j++)
    {
    printf("%d  ",arr[i][j]+arr1[i][j]); //sum[i][j]=arr[i][j]+arr1[i][j];
    }
  printf("\n");
  }
getch();
}
