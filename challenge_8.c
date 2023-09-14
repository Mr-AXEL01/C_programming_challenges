#include <stdio.h>

int main() {
    int num;

    printf("Enter your integer please : ");
    scanf("%d", &num);

    // Display the equivalent octal and hexadecimal values  : 
    printf("Octal equivalent: %o\n", num);
    printf("Hexadecimal equivalent: %X\n", num);

    return 0;
}
