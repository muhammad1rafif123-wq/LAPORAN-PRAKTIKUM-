#include <stdio.h>

int main() {
    int score;

    printf("Masukkan nilai : ");
    scanf("%d", &score);

    char grade;
    if (score >= 80) grade = 'A';
    else if (score >= 70) grade = 'B';
    else if (score >= 60) grade = 'C';
    else if (score >= 50) grade = 'D';
    else grade = 'E';

    printf("%c\n", grade);

    return 0;
}
