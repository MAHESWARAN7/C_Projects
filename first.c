#include <stdio.h>

int main() {
    // 1. Declare a variable (array of characters for the name)
    char name[50]; 
    
    // 2. Prompt the user for input
    printf("Enter your name: ");
    
    // 3. Get the input from the keyboard
    scanf("%s", name); 
    
    // 4. Print the final message
    printf("\nHello, %s! u are the best .\n", name); 

    return 0;
}