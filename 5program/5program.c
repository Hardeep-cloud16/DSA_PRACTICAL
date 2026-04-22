#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[100] = {10, 20, 30, 40, 50};
    int size = 5;
    int choice, pos, value, i;

    while (1)
    {
        printf("\n\n--- ARRAY OPERATIONS ---");
        printf("\n1. Insert Element");
        printf("\n2. Delete Element");
        printf("\n3. Display Array");
        printf("\n4. Exit");
        printf("\nChoose an option (1-4): ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter position to insert (1 to %d): ", size + 1);
            scanf("%d", &pos);
            printf("Enter Value: ");
            scanf("%d", &value);

            // Shifting Right (Perfect hai!)
            for (i = size; i >= pos; i--)
            {
                arr[i] = arr[i - 1];
            }
            arr[pos - 1] = value;
            size++;
            printf("Element Successfully inserted..");
            break;

        case 2:
            printf("Enter Position to delete (1 to %d): ", size);
            scanf("%d", &pos);

            // CORRECTED: Condition check honi chahiye ki position range mein hai ya nahi
            if (pos >= 1 && pos <= size) 
            {
                for (i = pos - 1; i < size - 1; i++)
                {
                    arr[i] = arr[i + 1];
                }
                size--;
                printf("Element deleted!");
            }
            else
            {
                printf("Invalid Position! Please enter between 1 and %d", size);
            }
            break;

        case 3:
            printf("Array Elements: ");
            for (i = 0; i < size; i++)
            {
                printf("%d ", arr[i]);
            }
            break;

        case 4:
            printf("Exiting... Bye!\n");
            exit(0);

        default:
            printf("Wrong choice!");
        }
    }
    return 0;
}
