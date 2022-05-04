#include <stdio.h>
void main()
{
   FILE *fp;
   int len;
   fp = fopen("one.txt","r");
   if(fp == NULL) 
   {
      perror("Error opening file");
   }
   fseek(fp,0,SEEK_END);
   len = ftell(fp);
   fclose(fp);
   printf("Size of file: %d bytes", len);
}