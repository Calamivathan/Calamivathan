#include<stdio.h>
int even(int);
void main(){
int x;
printf("enter no.\t");
scanf("%d",&x);
even(x);
}
int even(int a)
    {
        if(a%2==0){
        printf("even\n");
    }
    else
    {
        printf("odd\n");
    }
return 0;
}