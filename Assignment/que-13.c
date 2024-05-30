#include <stdio.h>

int main() {
    int asciiValue;
    char character;

    printf("Enter an ASCII value (0 to 127): ");
    scanf("%d", &asciiValue);

    if (asciiValue < 0 || asciiValue > 127) {
        printf("Invalid ASCII value. Please enter a value between 0 and 127.\n");
    } else {
        character = (char)asciiValue;

        printf("The character for ASCII value %d is '%c'\n", asciiValue, character);
    }

    return 0;
}
