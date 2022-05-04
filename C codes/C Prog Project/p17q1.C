#include<stdio.h>
struct book
{
char title[100],author[100],subject[100];
long id;
}b[2];
void main()
{
int i;
clrscr();
  for(i=0;i<2;i++)
  {
  fflush(stdin);
  printf("\nBook %d:\nTitle   = ",i+1);
  gets(b[i].title);
  printf("Author  = ");
  gets(b[i].author);
  printf("Subject = ");
  gets(b[i].subject);
  printf("Book ID = ");
  scanf("%ld",&b[i].id);
  }
printf("\nYour Input:\n");
  for(i=0;i<2;i++)
  {
  printf("Book %d :\nTitle   = %s\nAuthor  = %s",i+1,b[i].title,b[i].author);
  printf("\nSubject = %s\nBook ID = %ld\n\n",b[i].subject,b[i].id);
  }
getch();
}
