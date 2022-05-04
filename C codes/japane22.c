#include<stdio.h>
void main()
{
    int n1, n2, sum, diff, product, quotient;
    float avg, percent;
    char operator;
    printf("\n\n Enter 1st number: ");
    scanf("%d", &n1);
    printf(" Enter 2nd number: ");
    scanf("%d", &n2);

    printf("\n Press + for addition");
    printf("\n Press - for subtraction");
    printf("\n Press * for multiplication");
    printf("\n Press / for division");
    printf("\n Press a for average");
    printf("\n Press p for percantage");
    printf("\n\n Enter the operation to continue: ");
    scanf(" %c", &operator);

    switch(operator)
    {
        case '+': sum=n1+n2;
                  printf("\n Sum=%d", sum);
                  break;
        
        case '-': diff=n1-n2;
                  printf("\n Difference=%d", diff);
                  break;

        case '*': product=n1*n2;
                  printf("\n Product=%d", product);
                  break;

        case '/': quotient=n1+n2;
                  printf("\n Quotient=%d", quotient);
                  break;

        case 'a': avg=(float)((n1+n2)/2);
                  printf("\n Avereage=%.2f",avg);
                  break;

        case 'p': percent=(float)((float)(n1+n2)/200)*100;
                  printf("\n Percentage=%.2f",percent);
                  break; 

        default: printf("\n Please choose the correct option");
    }
    printf("\n\n");
    
}