#include<stdio.h>
#include<stdlib.h>

void main ()
{
    FILE *fp;
    int len;
 
    fp = fopen("myfile.txt", "r");
 
    if( fp == NULL )
    {
        printf ("Error opening file");
        exit(1);
    }
 
    fseek(fp, 0, SEEK_END);// from position 0
    
    len = ftell(fp);
    
    fclose(fp);
    
    printf("Total size of myfile.txt = %d bytes\n", len);
}