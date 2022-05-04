#include<stdio.h>
void main()
{
    float celsius,fahrenheit;
    printf("enter the temperature in celsius=");
    scanf("%f",&celsius);
    fahrenheit=(celsius*9/5)+32;
    printf("\nvalue of temperature in fahrenheit=%.2f",fahrenheit);
    getch ();
}