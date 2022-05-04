#include<stdio.h>
void main(){
int r,c,i,j,ar[10][10],ar1[10][10],ar2[10][10];
clrscr();
printf("Enter the no. of rows: ");
    scanf("%d", &r);
    printf("Enter the no. of columns: ");
    scanf("%d", &c);    
printf("\nenter elements of matrix 1 :\n");
for ( i = 0; i < r; i++)
{
   for ( j = 0; j < c; j++)
   {
       printf("enter element of %d%d : ",i+1,j+1);
        scanf("%d",&ar[i][j]) ;
   }
}
printf("\nelemets of matrix 1 : \n");
for ( i = 0; i < r; i++)
{
   for ( j = 0; j < c; j++)
   {
      printf("%d  ",ar[i][j]) ;
   }printf("\n");
}
printf("\n");
printf("enter elements matrix 2 : \n");
for ( i = 0; i < r; i++)
{
   for ( j = 0; j < c; j++)
   {
       printf("enter element of %d%d : ",i+1,j+1);
        scanf("%d",&ar1[i][j]) ;
   }
}
printf("\nelemets of matrix 2 : \n");
for ( i = 0; i < r; i++)
{
   for ( j = 0; j < c; j++)
   {
      printf("%d\t",ar1[i][j]) ;
   }printf("\n");
}
printf("\n subtraction of matrices =>\n");
for ( i = 0; i < r; i++)
{
   for ( j = 0; j < c; j++)
   {
       ar2[i][j]=ar[i][j]-ar1[i][j];
      printf("%d\t",ar2[i][j]) ;
   }printf("\n");
}
getch();
}
