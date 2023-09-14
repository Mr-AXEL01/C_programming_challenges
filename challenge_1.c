#include <stdio.h>

int main() {
    // Variables for user information
    char firstName[30];
    char lastName[30];
    char gender; 
    int age;
    char phoneNumber[11];

    // Asking the user
    printf("Hello, there\n");
    printf("Enter your first name: ");
    scanf("%s", firstName);
    printf("Enter your last name: ");
    scanf("%s", lastName);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Choose your gender (M/F): ");
    scanf(" %c", &gender); // Add a space before %c to consume whitespace, including newline

    printf("Enter your phone number: ");
    scanf("%s", phoneNumber);
    printf("\n\n");
    printf("****Your Information****\n");
    printf("Your first name is %s\n", firstName);
    printf("Your last name is %s\n", lastName);
    printf("Your age is %d\n", age);
    if (gender == 'M' || gender == 'm') {
        printf("You are a Male\n");
    } else if (gender == 'F' || gender == 'f') {
        printf("You are a Female\n");
    } else {
        printf("Invalid gender choice, please choose 'M' or 'F'.\n");
        return 1;
    }
    printf("Your phone number is : %s\n", phoneNumber);

    return 0;
}
