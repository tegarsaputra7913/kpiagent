#include <stdio.h>

int main() {
    float F, C;
    
    printf("Masukkan Temperatur dalam Fahrenheit: ");
    scanf("%f", &F);
    
    C = (5.0 / 9.0) * (F - 32);
    
    printf("Temperatur dalam Fahrenheit = %f menjadi Celcius = %f\n", F, C);
    
    return 0;
}