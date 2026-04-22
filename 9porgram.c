#include <stdio.h>
#include <string.h> // String functions (strstr) use karne ke liye zaroori hai

int main()
{
    // Ek character array banayi jisme main message hai
    char text[] = "Coding is Life"; 
    
    // Wo word jo humein dhoondna hai
    char pattern[] = "Life"; 
    
    // char pointer jo address store karega jahan pattern milega
    char *result;

    /* strstr(text, pattern) function 'text' mein 'pattern' ko dhoondta hai.
       Agar mil gaya, toh ye us jagah ka "Memory Address" return karta hai.
       Agar nahi mila, toh ye NULL return karta hai.
    */
    result = strstr(text, pattern);

    // Agar result NULL nahi hai (matlab pattern mil gaya)
    if (result)
    {
        /* IMP LOGIC: result - text 
           'result' mein "Life" ka starting address hai (Maan lo 2010).
           'text' mein poori string ka starting address hai (Maan lo 2000).
           Dono ko minus karne par humein unke beech ka gap (Index) mil jata hai.
           2010 - 2000 = 10 (Index mil gaya!)
        */
        printf("Pattern Found at index no : %ld", result - text);
    }
    else
    {
        // Agar strstr ne NULL return kiya toh
        printf("Pattern doesn't Exist...!");
    }
    
    return 0;
}
