#include <stdio.h>

struct Peserta {
    char name[50];
    int age;
    int score;
};
int main(void) {
    int n;
    struct Peserta data[10];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s %d %d", data[i].name, &data[i].age, &data[i].score);
    }

    int best = 0;
    for (int i = 1; i < n; i++) {
        if (data[i].score > data[best].score) {
            best = i;
        }
    }
    printf("Peserta dengan skor tertinggi adalah %s dengan skor %d\n", data[best].name, data[best].score);
    return 0;
}