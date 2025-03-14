// 2. Write a program to read your Last name and First name from keyboard then show message “ Welcome to IDT Last name First name”

#include <stdio.h>

int main(void) {
    char firstName[20], lastName[20];
    
    // Read first name and last name from the keyboard
    printf("Enter your first name: ");
    scanf("%s", firstName);
    
    printf("Enter your last name: ");
    scanf("%s", lastName);

    // Print the welcome message
    printf("Welcome to IDT %s %s\n", lastName, firstName);
    
    return 0;
}
