#include <stdio.h>

int main() {
    int totalSeconds;

    printf("Masukkan jumlah detik : ");
    scanf("%d", &totalSeconds);

    int days = totalSeconds / 86400;
    int remainder = totalSeconds % 86400;
    int hours = remainder / 3600;
    remainder = remainder % 3600;
    int minutes = remainder / 60;
    int seconds = remainder % 60;

    if (days > 0)
        printf("%d hari %02d:%02d:%02d\n", days, hours, minutes, seconds);
    else
        printf("%02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}
