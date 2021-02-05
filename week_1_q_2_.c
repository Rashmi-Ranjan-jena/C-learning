#include <stdio.h>
int main()
{
    float temp;
    float farh;
    printf("Enter the temperature in celcious");
    scanf("%f",&temp);
    farh=((temp*9)/5)+32;
    printf("The temperature in fahrenheit is %f",farh);
    return 0;
}    