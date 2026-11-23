#include <stdio.h>
#include <string.h>

struct Peserta {
    char name[50];
    int age;
    int score;
};
int main(void) {
    struct Peserta p;
    printf("Nama : ");
    fgets(p.name, 50, stdin);
    p.name[strcspn(p.name, "\n")] = '\0';

    printf("Umur : ");
    scanf("%d", &p.age);
    printf("Skor : ");
    scanf("%d", &p.score);

    printf("Data Peserta:\n");
    printf("Nama : %s\n", p.name);
    printf("Umur : %d tahun\n", p.age);
    printf("Skor : %d\n", p.score);
    return 0;
}
