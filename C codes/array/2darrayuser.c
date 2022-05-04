#include<stdio.h>
void main()
{
    int i,j,r,c;
    printf("enter no. of row= ");
    scanf("%d",&r);
    printf("\nenter no. of column= ");
    scanf("%d",&c);
    int aalu[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("\nenter the value of array at index [%d][%d] = ",i+1,j+1);
            scanf("%d",&aalu[i][j]);
        }
    }
    printf("--------------------------------------------------------------------------------------------------------\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d  ",aalu[i][j]);
        }
        printf("\n");
    }
}