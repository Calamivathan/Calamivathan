#include<stdio.h>
void main()
{
    int r,c;
    int aalu[3][3],i,j;
    // for(i=0;i<3;i++)
    // {
    //     printf("\nvalue of array row index%d ",i+1);
    //     for(j=0;j<3;j++)
    //     {
    //     printf("\nvalue of array col index%d= ",j+1,aalu[i][j]);
    //     scanf("%d",&aalu[i][j]);
    //     }
    // }
    for(i=0;i<3;i++)
    {
        printf("\n ");
        for(j=0;j<3;j++)
        {
        printf(" %d       %d",aalu[i][j]);
        }
    }
}