#include <stdio.h>

int main() {
    int pilihan;

    do {
        // Menu Pilihan Interaktif
        printf("\n====================================\n");
        printf("    PROGRAM TUGAS MINGGU 5 LOOPING   \n");
        printf("====================================\n");
        printf("1. Menghitung Nilai Rata-Rata (For Loop)\n");
        printf("2. Menghitung Faktorial (While Loop)\n");
        printf("3. Deret Angka Interaktif (Do-While Loop)\n");
        printf("4. Keluar\n");
        printf("Pilih menu (1-4): ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1: {
                // 1. Menghitung Nilai Rata-Rata menggunakan 'for'
                int n, i;
                float nilai, total = 0, rata_rata;

                printf("\n--- Menghitung Nilai Rata-Rata ---\n");
                printf("Masukkan jumlah data: ");
                scanf("%d", &n);

                for (i = 1; i <= n; i++) {
                    printf("Masukkan nilai ke-%d: ", i);
                    scanf("%f", &nilai);
                    total += nilai; // Akumulasi nilai
                }

                if (n > 0) {
                    rata_rata = total / n;
                    printf("Total Nilai = %.2f\n", total);
                    printf("Rata-rata   = %.2f\n", rata_rata);
                } else {
                    printf("Jumlah data harus lebih dari 0!\n");
                }
                break;
            }
            case 2: {
                // 2. Menghitung Faktorial menggunakan 'while'
                int angka, temp;
                unsigned long long faktorial = 1;

                printf("\n--- Menghitung Faktorial ---\n");
                printf("Masukkan angka non-negatif: ");
                scanf("%d", &angka);

                if (angka < 0) {
                    printf("Faktorial tidak terdefinisi untuk bilangan negatif.\n");
                } else {
                    temp = angka;
                    while (temp > 1) {
                        faktorial *= temp; // Akumulasi perkalian
                        temp--;
                    }
                    printf("Faktorial dari %d (%d!) adalah: %llu\n", angka, angka, faktorial);
                }
                break;
            }
            case 3: {
                // 3. Deret Angka Interaktif menggunakan 'do-while'
                int batas, i = 1;

                printf("\n--- Menampilkan Deret Angka Interaktif ---\n");
                printf("Masukkan batas angka: ");
                scanf("%d", &batas);

                if (batas < 1) {
                    printf("Batas harus minimal 1.\n");
                } else {
                    printf("Deret angka dari 1 sampai %d: ", batas);
                    do {
                        printf("%d ", i);
                        i++;
                    } while (i <= batas);
                    printf("\n");
                }
                break;
            }
            case 4:
                printf("\nTerima kasih! Program selesai.\n");
                break;
            default:
                printf("\nPilihan tidak valid! Silakan coba lagi.\n");
        }
    } while (pilihan != 4);

    return 0;
}