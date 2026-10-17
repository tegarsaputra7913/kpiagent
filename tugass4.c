#include <stdio.h>

int main() {
    float nilai_angka;
    char grade;
    float bobot;

    // Input nilai angka dari pengguna
    printf("Masukkan nilai angka (0 - 100): ");
    scanf("%f", &nilai_angka);

    // Validasi input
    if (nilai_angka < 0 || nilai_angka > 100) {
        printf("Error: Nilai harus berada di rentang 0 sampai 100.\n");
        return 1;
    }

    // -----------------------------------------------------------
    // TAHAP 1: Konversi Nilai Angka ke Grade Huruf (berbasis if-else)
    // -----------------------------------------------------------
    if (nilai_angka >= 85) {
        grade = 'A';
    } else if (nilai_angka >= 70) {
        grade = 'B';
    } else if (nilai_angka >= 55) {
        grade = 'C';
    } else if (nilai_angka >= 40) {
        grade = 'D';
    } else {
        grade = 'E';
    }

    // -----------------------------------------------------------
    // TAHAP 2: Konversi Grade Huruf ke Bobot Nilai (berbasis switch-case)
    // -----------------------------------------------------------
    switch (grade) {
        case 'A':
            bobot = 4.0;
            break;
        case 'B':
            bobot = 3.0;
            break;
        case 'C':
            bobot = 2.0;
            break;
        case 'D':
            bobot = 1.0;
            break;
        case 'E':
            bobot = 0.0;
            break;
        default:
            bobot = 0.0;
            break;
    }

    // Menampilkan hasil akhir
    printf("\n=== HASIL KONVERSI NILAI ===\n");
    printf("Nilai Angka : %.2f\n", nilai_angka);
    printf("Grade Huruf : %c\n", grade);
    printf("Bobot Nilai : %.1f\n", bobot);

    return 0;
}