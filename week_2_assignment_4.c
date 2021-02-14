#include <stdio.h>
int main()
{
    int max, min;
    int arr[9];
    for(int i=0;i<10;i++){
        scanf("%d\n",&arr[i]);
    }
    max = min = arr[0];
        for (int i=0; i < 10; i++)
        {
            if (arr[i] > max)
            {
                max = arr[i];
            }
            if (arr[i] < min)
            {
                min = arr[i];
            }
        }
        printf("%d\n", max);
        printf("%d\n", min);
        return 0;
}
