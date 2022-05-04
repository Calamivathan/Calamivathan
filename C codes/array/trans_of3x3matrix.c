#include<stdio.h>
int main()
{
int mat[3][3],trans[3][3],i,j;



printf("enter the elements of a matrix\n");
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
scanf("%d",&mat[i][j]);
}
}
printf("matrix of A:\n");



for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
printf("\t %d",mat[i][j]);
}
printf("\n");
}
//values transfered in another aray
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
trans[j][i]=mat[i][j];
}
}
printf("Transpose of matrix:\n");



for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
printf("\t %d",trans[i][j]);
}
printf("\n");
}
return 0;
}