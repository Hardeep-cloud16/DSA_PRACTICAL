#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int start, end, len;

    printf("Enter string: ");
    gets(str); 

    len = strlen(str); // Get the actual length of the string

    printf("Enter start index: ");
    scanf("%d", &start);

    printf("Enter end index: ");
    scanf("%d", &end);

    // SIMPLE VALIDATION
    // 1. Check if indices are negative
    // 2. Check if indices are beyond the string length
    // 3. Check if start is greater than end
    if (start < 0 || end >= len || start > end) {
        printf("Invalid indices! Please enter values between 0 and %d.\n", len - 1);
    } else {
        printf("Your substring is: ");
        for (int i = start; i <= end; i++) {
            printf("%c", str[i]);
        }
        printf("\n");
    }

    return 0;
}
