#include <stdio.h>

int main() {
    int a, b, i, temp;
    int jumlah = 0;

    printf("Masukkan sepasang bilangan (misalnya 4,10):\n");
    printf("Masukkan bilangan pertama dari pasangan tersebut: ");
    scanf("%d", &a);
    printf("Masukkan bilangan kedua dari pasangan tersebut: ");
    scanf("%d", &b);

    /* Tukar jika bilangan pertama lebih besar dari bilangan kedua */
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }

    printf("Daftar bilangan ganjil: ");
    for (i = a; i <= b; i++) {
        if (i % 2 != 0) {
            printf("%d\n", i);
            jumlah += i;
        }
    }

    printf("Jumlah=%d\n", jumlah);

    return 0;
}