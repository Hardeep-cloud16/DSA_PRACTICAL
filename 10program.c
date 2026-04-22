#include <stdio.h>

// Step 1: Stack ki size fix karna
#define MAX 5 

int stack[MAX]; // 5 elements store karne ke liye array
int top = -1;   // Shuruat mein stack khaali hai, isliye top -1 par hai

// --- PUSH OPERATION (Element daalna) ---
void push(int value)
{
    // Overflow Check: Agar top 4 par pahunch gaya (MAX-1), toh jagah nahi hai
    if (top == MAX - 1)
    {
        printf("Stack is OverFlow...! (Stack full ho chuka hai)\n");
    }
    else
    {
        top++;             // Pehle top ko ek step upar le jao
        stack[top] = value; // Nayi value ko us index par rakh do

        printf("Element %d is Inserted into Stack\n", stack[top]);
    }
}

// --- POP OPERATION (Element nikaalna) ---
void pop()
{
    // Underflow Check: Agar top -1 par hai, matlab stack mein kuch hai hi nahi
    if (top == -1)
    {
        printf("Stack is UnderFlow..! (Nikaalne ke liye kuch nahi hai)\n");
    }
    else
    {
        // Top wala element dikhao aur top ko ek step niche kar do
        printf("Element %d is Popped from Stack\n", stack[top]);
        top--; 
        /* Yaad rahe: Element array se delete nahi hota, bas 'top' niche 
           aa jata hai toh purana data overwrite ho jata hai baad mein. */
    }
}

// --- DISPLAY OPERATION (Stack dikhaana) ---
void display()
{
    if (top == -1)
    {
        printf("Stack is Empty....!\n");
    }
    else
    {
        printf("Current Stack (Top to Bottom):\n");
        // Loop 'top' se '0' tak chalega kyunki stack upar se niche dikhta hai
        for (int i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}

int main()
{
    // Adding Elements
    push(10); // Index 0
    push(20); // Index 1
    push(30); // Index 2
    push(40); // Index 3
    push(50); // Index 4 (Full)
    
    display(); // Sab elements dikhayega

    pop();     // 50 baahar niklega kyunki wo sabse aakhir mein aaya tha
    
    printf("\nAfter Popping:\n");
    display(); // Ab 40 top par hoga

    return 0;
}
