#include <stdio.h>

int main()
{
    // Initializing an array with extra capacity (10) and current data (6 elements)
    int arr[10] = {1, 2, 99, 3, 4, 5}; 
    int size = 6;  // Keeps track of how many elements are actually in use
    int pos = 3;   // Target position to delete (Human-readable: 3rd element)

    // Check if the position entered is actually within the array bounds
    if (pos > size || pos < 0)
    {
        printf("Invalid Position....!");
    }
    else
    {
        /* THE SHIFTING LOOP:
           We start at 'pos - 1' (index 2) because C arrays are 0-indexed.
           We loop forward, replacing the current element with the next one.
        */
        for (int i = pos - 1; i < size - 1; i++) // Note: size - 1 prevents accessing garbage at the very end
        {
            // Move the element from the right (i+1) to the current position (i)
            // Example: arr[2] becomes arr[3], then arr[3] becomes arr[4]...
            arr[i] = arr[i + 1];
        }

        // Reduce the size count because one element has been "removed"
        size--;
    }

    // Print the updated array
    printf("After Deletion in Array is : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
