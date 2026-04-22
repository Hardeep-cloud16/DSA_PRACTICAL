#include <stdio.h>
#include <string.h>

int main()
{
    char str1[10] = "abc";
    char str2[] = "def";

    strcat(str1, str2);

    printf("New String is %s ", str1);
    return 0;
}
