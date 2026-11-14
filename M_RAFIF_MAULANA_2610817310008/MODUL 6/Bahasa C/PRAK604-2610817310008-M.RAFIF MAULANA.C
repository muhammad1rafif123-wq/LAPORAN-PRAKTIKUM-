#include <stdio.h>
#include <string.h>

int main(void) {
    char code[1000], message[1000], result[1000];
    fgets(code, 1000, stdin);
    code[strcspn(code, "\n")] = '\0';
    fgets(message, 1000, stdin);
    message[strcspn(message, "\n")] = '\0';

    int length = strlen(code);
    if (length != strlen(message)) {
        printf("Panjang kalimat berbeda, pesan palsu\n");
        return 0;
    }
    int stars = 0;
    int hashes = 0;
    for (int i = 0; i < length; i++) {
        if (code[i] == ' ' && message[i] == ' ') {
            result[i] = ' ';
        } else if (code[i] == message[i]) {
            result[i] = '*';
            stars++;
        } else {
            result[i] = '#';
            hashes++;
        }
    }
    result[length] = '\0';
    printf("%s\n", result);
    printf("* = %d\n", stars);
    printf("# = %d\n", hashes);

    if (stars >= hashes) {
        printf("Pesan Asli\n");
    } else {
        printf("Pesan Palsu\n");
    }
    return 0;
}