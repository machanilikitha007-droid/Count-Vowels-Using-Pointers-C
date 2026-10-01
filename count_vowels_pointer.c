#include <stdio.h>

int main() {
    char text[100];
    char *ptr;
    int count = 0;

    printf("Enter a string: ");
    scanf(" %[^\n]", text);

    ptr = text;

    while (*ptr != '\0') {
        if (*ptr == 'a' || *ptr == 'e' || *ptr == 'i' ||
            *ptr == 'o' || *ptr == 'u' ||
            *ptr == 'A' || *ptr == 'E' || *ptr == 'I' ||
            *ptr == 'O' || *ptr == 'U') {
            count++;
        }

        ptr++;
    }

    printf("\nNumber of Vowels: %d\n", count);

    return 0;
}
