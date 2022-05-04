#include<stdio.h>
int main() 
{
FILE *ft; char ch,c;
// fs=fopen("array.c","r");
//  if(fs==null) {
// puts(“can not open source file”);
// exit();
// }
printf("type ur msg\n");
ft=fopen("newfile.txt","w");
// if(ft==null) {
// puts("can not open target file"); exit();
// }
fflush(stdin);
c=getchar();
while(1) {
ch=fgetc(c);
if(ch==EOF) break;
else
fputc(ch,ft);
}
fclose(ft);
}
