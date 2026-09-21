#include <stdio.h>

int main() {
    char character;
    printf("Enter a character: ");
    scanf("%c", &character);

    switch (character) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c vowel hai\n", character);
            break;
        default:
            printf("%c consonant hai\n", character);
    }

    return 0;
}