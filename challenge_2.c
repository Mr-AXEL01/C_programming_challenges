#include <stdio.h>
#include <string.h> // the string.h library for strcpy

int main() {
    int C, F;
    char sensation[50]; 

    printf("Please enter the temperature in Fahrenheit: ");
    scanf("%d", &F);

    C = (F - 32) / 1.8;

    if (C <= 0) {
        strcpy(sensation, "the weather is very cold.");
    } else if (C <= 10) {
        strcpy(sensation, "the weather is cold.");
    } else if (C <= 20) {
        strcpy(sensation, "the weather is hot.");
    } else {
        strcpy(sensation, "the weather is very hot.");
    }

    printf("The temperature in Celsius is %d\n", C);
    printf("So %s\n", sensation); // Use %s to print a string

    return 0;
}
