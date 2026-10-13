#include <stdio.h>
int main(){
    double harga, uang_bayar, subtotal, nominal_diskon , total_akhir , kembalian ;
    float diskon;
    int jumlah;     
  
    printf("==================================================\n");
    printf("        SISTEM KASIR TOKO UTAMA - UAI           \n  ");
    printf("==================================================\n");
    
    printf("Masukan Harga Per Unit\n");
    scanf("%lf", &harga);
    printf("Masukan Jumlah Beli\n");
    scanf("%i", &jumlah);
    printf("Masukan Diskon\n");
    scanf("%f", &diskon);

    printf("--------------------------------------------------\n");
    subtotal = harga*jumlah;
    nominal_diskon= subtotal*(diskon/100);
    total_akhir= subtotal-nominal_diskon;
    kembalian= uang_bayar-total_akhir;

    printf("subtotal                   :%.2lf\n", subtotal);
    printf("Nominal diskon (10.0%)     :%f\n" , nominal_diskon);
    printf("TOTAL HARGA AKHIR          :%.2lf\n", total_akhir);
    printf("---------------------------------------------------\n");
    printf("Masukan Nominal Uang bayar :%.2lf\n", uang_bayar);
    scanf("%.2lf", &uang_bayar);
    printf("Uang Kembalian             :%.2lf\n", kembalian);
    printf("==================================================\n");

    return 0;

}

