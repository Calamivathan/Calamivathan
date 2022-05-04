#include<stdio.h>
void main(){
int a;
clrscr();
printf("\n  Enter a Number : ");
scanf("%d",&a);
	if(a%2==0)
	printf("  %d is Even",a);
	else
	printf("  %d is Odd",a);
getch();
}
