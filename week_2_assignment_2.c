#include <stdio.h>
int main()
{
    int arr[9],sum = 0,n,sum1 = 0;
    printf("Enter n:");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d\n", &arr[i]);
    }
    for (int i=0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
           sum+=arr[i];
        }
    }
    for (int i=0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
           sum1+=arr[i];
        }
    }
    printf("The sum of the digit of number is %d", sum);
    printf("The sum of the digit of number placed in even positions is %d", sum1);
    return 0;
}