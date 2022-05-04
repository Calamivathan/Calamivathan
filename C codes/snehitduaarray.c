#include<stdio.h>
#include<conio.h>
void main()
{
int arr[20][20],arr1[20][20],mul[20][20],i,j,k,row,col,row1,col1;
clrscr();
  for(k=1;k<=2;k++) //For Rows & Columns
  {
  printf("Enter no. of rows & columns for Matrix %d:",k);
  scanf("%d\t%d",&row,&col);
  printf("Matrix %d\n",k);
    for(i=0;i<row;i++)  //For Input
    {
    printf("Row %d:\n",i+1);
      for(j=0;j<col;j++)
      {
      printf("Enter Element No.%d=",j+1);
if(k==1)   //To save in diff array
{
scanf("%d",&arr[i][j]);
col1=col;
row1=row;
}
else
scanf("%d",&arr1[i][j]);
      }
    }
  }
//Checking if Multiplication is possible or not
if(col1==row)
{
 for(i=0;i<row1;i++)  //Multiplying
 {
   for(j=0;j<col;j++)
   {
   mul[i][i]+=arr[i][j]*arr1[j][i];
   }
 printf("%d\n\t",mul[i][i]);
 }
}
else
printf("Multiplication Not Possible");
getch();
}