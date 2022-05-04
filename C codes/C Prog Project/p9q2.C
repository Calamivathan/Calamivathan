#include<stdio.h>
void main(){
int i=0,count=0;
clrscr();
printf("\n  First 10 Even Numbers:\n");
  do{
	if(i%2==0)
{
	printf("  %d  ",i);
	count++;
	}
  i++;
  }while(count!=10);
getch();
}
