#include <stdio.h>

int main() {
    double harga;
    int jumlah;
    float diskon;
    double uang_bayar;
    double subtotal;
    double nominal_diskon;
    double total_akhir;
    double kembalian;

   
    printf("==================================================\n");
    printf("        SISTEM KASIR TOKO UTAMA - UAI             \n");
    printf("==================================================\n");

    printf("Masukan Harga Per Unit : ");
    scanf("%lf", &harga);             
    printf("Masukan Jumlah Beli    : ");
    scanf("%d", &jumlah);    
    printf("Masukan Diskon (%%)     : ");
    scanf("%f", &diskon);

    subtotal = harga * jumlah;
    nominal_diskon = subtotal * (diskon / 100.0);
    total_akhir = subtotal - nominal_diskon;

    printf("--------------------------------------------------\n");
    printf("Subtotal               : Rp %.2lf\n", subtotal);
    printf("Nominal diskon (10.0%%) : Rp %.2lf\n", nominal_diskon);
    printf("TOTAL HARGA AKHIR      : Rp %.2lf\n", total_akhir);
    printf("--------------------------------------------------\n");

    // Input Pembayaran (pindahkan perhitungan kembalian ke setelah baris ini)
    printf("Masukan Nominal Uang bayar : Rp ");
    scanf("%lf", &uang_bayar);        // Perbaikan: gunakan %lf tanpa %.2

    // Hitung kembalian setelah uang_bayar di-input
    kembalian = uang_bayar - total_akhir;

    // Output Kembalian
    printf("Uang Kembalian             : Rp %.2lf\n", kembalian);
    printf("==================================================\n");

    return 0;
}

