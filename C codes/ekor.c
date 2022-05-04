#include<stdio.h>
#include<conio.h>
int main(){
    //declare the integers
int i,j,k;
int rows,cols;
//set max AxB matrix value to 30x30
int ar[30][30];
int ar1[30][30];
int mult[30][30];
//user input of rows and columns
printf("enter numbers of rows of matrix: ");
scanf("%d",&rows);
printf("enter numbers of columns of matrix: ");
scanf("%d",&cols);

//First matrix
for ( i = 0; i < rows; i++)
{
   for ( j = 0; j < cols; j++)
   {
       printf("enter element at position %d, %d : ",i+1,j+1);
        scanf("%d",&ar[i][j]) ;
   }
}

printf("\nelemets of 1st 2D matrix: \n");

for ( i = 0; i < rows; i++)
{
   for ( j = 0; j < cols; j++)
   {
      printf("%d\t",ar[i][j]) ;
   }printf("\n");
}
printf("\n");
//Second matrix
printf("enter second matrix \n");
for ( i = 0; i < rows; i++)
{
   for ( j = 0; j < cols; j++)
   {
       printf("enter element at position %d, %d : ",i+1,j+1);
        scanf("%d",&ar1[i][j]) ;
   }
}
printf("\nelemets of 2nd 2D matrix: \n");

for ( i = 0; i < rows; i++)
{
   for ( j = 0; j < cols; j++)
   {
      printf("%d\t",ar1[i][j]) ;
   }printf("\n");
}
//Calculation
printf("\n multiplication of 2 matrices \n");
for ( i = 0; i < rows; i++)
{
   for ( j = 0; j < cols; j++)
   {
     mult[i][j]=0;
     for ( k = 0; k < cols; k++)
     {
        mult[i][j]=mult[i][j]+ar[i][k]*ar1[k][j];
     }
     
   }
}
//Output
printf("output: \n");
for ( i = 0; i < rows; i++)
{
   for ( j = 0; j < cols; j++)
   {
      printf("%d\t",mult[i][j]) ;
   }printf("\n");
}
getch();
return 0;
}