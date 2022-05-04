#include<stdio.h>
void main()
{
    int mat1[10][10],mat2[10][10],mult[10][10],i,j,k,row,col,row1,col1;
    clrscr();
    printf("enter the row of matrix 1\n");
    scanf("%d",&row);
    printf("enter the col of matrix 1\n");
    scanf("%d",&col);
    printf("enter the row of matrix 2\n");
    scanf("%d",&row1);
    printf("enter the col of matrix 2\n");
    scanf("%d",&col1);
    // //putting matrix one elements value
    printf("enter the elements of matrix one \n");
    for(i=0;i<row;i++)
    {
        printf("\nenter the element of row %d",i+1);
        for(j=0;j<col;j++)
        {
            printf("\nelement%d=",j+1);
            scanf("%d",&mat1[i][j]);
        }
    }
    //putting matrix two elements value
    for(i=0;i<row1;i++)
    {
        printf("\nenter the element of row %d",i+1);
        for(j=0;j<col1;j++)
        {
            printf("\nelement%d=",j+1);
            scanf("%d",&mat2[i][j]);
        }
    }
    //printinf matrix 1 elements on screen
    printf("\n matrix one");
    for(i=0;i<row;i++)
    {
        printf("\n");
        for(j=0;j<col;j++)
        {
            printf(" %d ",mat1[i][j]);
        }
    }
    //printinf matrix 2 elements on screen
    printf("\n matrix two");
    for(i=0;i<row1;i++)
    {
        printf("\n");
        for(j=0;j<col1;j++)
        {
            printf(" %d ",mat2[i][j]);
        }
    }
    //multiplying the matrixes and putting the values in third matrix
    for ( i = 0; i <row; i++)
    {
        for ( j = 0; j <col; j++)
        {
            mult[i][j]=0;
            for ( k = 0; k<col; k++)
            {
                mult[i][j]=mult[i][j]+mat1[i][k]*mat2[k][j];
            }
        }
    }
    printf("\nmultiplication of matrix");
    for(i=0;i<row;i++)
    {
        printf("\n");
        for(j=0;j<col;j++)
        {
            printf(" %d ",mult[i][j]);
        }
    }
    getch();
}