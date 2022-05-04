#include<stdio.h>
int table(int);
int main()
{
    int num;
    printf("enter the number to see its table");
    scanf("%d",&num);
    printf("\ntill where do u want to see its table");
    scanf("%d",&till);
    ansnswer=table(ans);
}
int table(int tab)
{
    int num,i,till,ans;
    for(i=1;i<=till;i++)
    {
        ans=num*i;
        printf("\ntable of %ld is",num);
        printf("  %ld X %ld=%ld",num,i,ans);
        return ans;
    }
}