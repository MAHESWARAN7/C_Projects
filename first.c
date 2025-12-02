#include <stdio.h>

int main() {
    // 1. Declare a variable (array of characters for the name)
    char name[50]; 
    
    // 2. Prompt the user for input
    printf("Enter anything on ur own : ");
    
    // 3. Get the input from the keyboard
    scanf("%s", name); 
    
    // 4. Print the final message
    printf("\nHello, %s! git git .\n", name); 

    return 0;
}