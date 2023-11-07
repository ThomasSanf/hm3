#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (isupper(ch)) {
        ch = tolower(ch);
        printf("The character in lowercase is: %c\n", ch);
    } else {
        printf("The character is already in lowercase or is not a letter: %c\n", ch);
    }

    return 0;
}
