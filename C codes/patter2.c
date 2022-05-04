#include<stdio.h>
int main()
{
    int i,j,n,num,spc,k;
    printf("how long do u want the start to print=");
    scanf("%d",&n);
    spc=n+4-1;
    for(i=1;i<=n;i++)
    {
        for(k=spc;k>=1;k--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {   
            num=0;
            num++;
            printf("%d ",j);
        }
        printf("\n");
        spc--;
    }
}