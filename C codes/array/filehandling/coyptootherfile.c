#include<stdio.h>
#include<stdlib.h>
#include<>

int main()
{
FILE *fs, *ft;
char ch;
fs=fopen("myfile.txt","r");
if(fs==NULL)
{ 
    puts("can not open source file"); 
    exit(1);
}
ft=fopen("myfile22.txt","w");
if(ft==NULL) 
{ 
    puts("can not open target file"); 
    exit(1);
}
while(1) 
{ 
    ch=fgetc(fs);
    if(ch==EOF) 
    break;
    
    else 
    fputc(ch,ft);
}
fclose(fs); 
fclose(ft);
}