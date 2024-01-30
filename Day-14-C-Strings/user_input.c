#include <stdio.h>

int main() {

    char str[100]; // Declare a character array to store the input
    
    printf("Enter a string: ");
    
    fgets(str, sizeof(str), stdin); // Read a line of text from the user

    printf("You entered: %s", str); // Print the input

    return 0;
}