#include <stdio.h>

double calculateEmployeePay(double wage, double hours) {
    const double REGULAR_LIMIT = 40.0;
    const double OVERTIME_LIMIT_1 = 60.0;
    const double OVERTIME_LIMIT_2 = 80.0;

    const double RATE_1 = 1.5
    const double RATE_2 = 2.0;

    if (hours <= 0 || wage <= 0) return 0.0;

    if (hours <= REGULAR_LIMIT) {
        return hours * wage;
    } 
    else if (hours <= OVERTIME_LIMIT_1) {
        double regularPay = REGULAR_LIMIT * wage;
        double overtimePay = (hours - REGULAR_LIMIT) * (wage * RATE_1);
        return regularPay + overtimePay;
    } 
    else {
        // Logika min() sederhana untuk C murni
        double cappedHours = (hours < OVERTIME_LIMIT_2) ? hours : OVERTIME_LIMIT_2;
        
        double regularPay = REGULAR_LIMIT * wage;
        double overtimePay1 = (OVERTIME_LIMIT_1 - REGULAR_LIMIT) * (wage * RATE_1);
        double overtimePay2 = (cappedHours - OVERTIME_LIMIT_1) * (wage * RATE_2);
        
        return regularPay + overtimePay1 + overtimePay2;
    }
}

int main() {
    double wage, hours;

    // Menggunakan printf dan scanf bawaan C
    printf("Masukkan upah per jam: ");
    scanf("%lf", &wage);

    printf("Masukkan total jam kerja: ");
    scanf("%lf", &hours);

    double totalPay = calculateEmployeePay(wage, hours);
    printf("Total gaji karyawan: $%.2f\n", totalPay);

    return 0;
}