#include<stdio.h>
#include<string.h>
void main() 
{ 
FILE *fp; 
char str[]; //declaring character of 80 characters 
fp=fopen("poem.txt","w"); //opening poem in write mode 
if(fp==NULL) 
{ 
puts("can not open file"); 
// exit(); 
} 
printf("\n enter few lines"); 
while(strlen(gets(str))>0) //inputting string till length is greater than zero 
{ 
fputs(str,fp); //putting string in file pointed to by fp  fputs(“\n”,fp); 
} 
fclose(fp); 
}
