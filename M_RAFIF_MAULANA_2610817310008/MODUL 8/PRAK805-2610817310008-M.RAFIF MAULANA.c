#include <stdio.h>

struct Dompet {
    char owner[50];
    int balance;
};
void top_up(struct Dompet *w, int amount) {
    w->balance = w->balance + amount;
}

int pay(struct Dompet *w, int amount) {
    if (w->balance < amount) {
        return 0;
    }
    w->balance = w->balance - amount;
    return 1;
}

int main(void) {
    struct Dompet w;
    int n;
    scanf("%s %d", w.owner, &w.balance);
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        char type;
        int amount;
        scanf(" %c %d", &type, &amount);
        if (type == 'T') {
            top_up(&w, amount);
            printf("Top up %d berhasil, saldo = %d\n", amount, w.balance);
        } else if (type == 'B') {
            if (pay(&w, amount) == 1) {
                printf("Bayar %d berhasil, saldo = %d\n", amount, w.balance);
            } else {
                printf("Bayar %d gagal, saldo tidak cukup\n", amount);
            }
        }
    }
    printf("Saldo akhir %s = %d\n", w.owner, w.balance);
    return 0;
}
