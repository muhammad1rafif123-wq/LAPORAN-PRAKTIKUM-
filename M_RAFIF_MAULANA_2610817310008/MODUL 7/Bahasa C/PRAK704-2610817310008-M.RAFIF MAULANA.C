#include <stdio.h>
#include <string.h>

int main(void) {
    char description[1000];
    fgets(description, 1000, stdin);
    description[strcspn(description, "\n")] = '\0';

    if (strlen(description) > 20) {
        description[20] = '\0';
        printf("%s...\n", description);
    } else {
        printf("%s\n", description);
    }
    return 0;
}