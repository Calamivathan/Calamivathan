#include<stdio.h>
void main()
{
    int mat[20][20],trans[20][20],i,j,row,col;
    printf("enter the number of rows&col=");
    scanf("%d %d",&row,&col);
    // printf("enter the number of col=");
    // scanf("%d",&col);
    printf("enter the elements of a matrix\n");
    for(i=0;i<row;++i)
    {
        for(j=0;j<col;++j)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    printf("matrix of A:\n");
     for(i=0;i<row;++i)
    {
        for(j=0;j<col;++j)
        {
            printf("%d  ",mat[i][j]); 
        }
    printf("\n");
    }
    //values transfered in another aray
    for(i=0;i<row;++i)
    {
    for(j=0;j<col;++j)
    {
        trans[j][i]=mat[i][j];
    }
    }
    // printing the transpose of matrix
printf("Transpose of matrix:\n");
for(i=0;i<col;++i)
{
for(j=0;j<row;++j)
{
printf("%d  ",trans[i][j]);
}
printf("\n");
}
}