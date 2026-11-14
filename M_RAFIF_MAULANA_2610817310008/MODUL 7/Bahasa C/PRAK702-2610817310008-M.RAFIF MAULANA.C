#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char word[100];
    scanf("%s", word);

    for (int i = 0; word[i] != '\0'; i++) {
        word[i] = tolower(word[i]);
    }

    int length = strlen(word);
    int is_palindrome = 1;
    for (int i = 0; i < length / 2; i++) {
        if (word[i] != word[length - 1 - i]) {
            is_palindrome = 0;
        }
    }
    if (is_palindrome == 1) {
        printf("Kata '%s' adalah palindrom\n", word);
    } else {
        printf("Kata '%s' bukan palindrom\n", word);
    }
    return 0;
}