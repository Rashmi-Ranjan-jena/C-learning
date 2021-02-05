#include <stdio.h>
int main()
{
    float a, b;
    printf("Enter the value of a");
    scanf("%f", &a);
    printf("Enter the value of b");
    scanf("%f", &b);
    printf("%f+%f=%f\n",a,b,a+b);
    printf("%f-%f=%f\n",a,b,a-b);
    printf("%f*%f=%f\n",a,b,a*b);
    printf("%f/%f=%f\n",a,b,a/b);
    return 0;
}