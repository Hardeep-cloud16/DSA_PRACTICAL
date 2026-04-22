// WAP To Selection Of Array

#include <stdio.h>
int main()
{
    int arr[] = {12, 32, 42, 53, 62};
    int size = sizeof(arr) / sizeof(int);

    int max = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("The  Maximum Element In Array is : %d", max);
    return 0;
}
