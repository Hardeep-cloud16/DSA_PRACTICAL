#include <stdio.h>

int main()
{
    // Give the array extra capacity (e.g., 10) so it can grow
    int arr[10] = {1, 2, 3, 4, 5}; 
    int size = 5; // The actual number of elements currently used
    int pos = 3;
    int value = 99;

    // FIX 1: Use i-- to move backwards from the end
    for (int i = size; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    printf("After Shifting the Array: ");
    // Note: size is still 5 here, but one element was moved to index 5
    for (int i = 0; i <= size; i++) 
    {
        printf("%d ", arr[i]);
    }

    // Insert the value
    arr[pos - 1] = value;
    size++; // Now size becomes 6

    printf("\nAfter Inserting New Element: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
