#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char sentence[1000];

    printf("Kalimat : ");
    fgets(sentence, 1000, stdin);
    sentence[strcspn(sentence, "\n")] = '\0';

    int vowels = 0;
    int consonants = 0;
    for (int i = 0; sentence[i] != '\0'; i++) {
        char letter = tolower(sentence[i]);
        if (isalpha(letter)) {
            if (letter == 'a' || letter == 'i' || letter == 'u' || letter == 'e' || letter == 'o') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }
    printf("Jumlah Vokal : %d\n", vowels);
    printf("Jumlah Konsonan : %d\n", consonants);
    return 0;
}