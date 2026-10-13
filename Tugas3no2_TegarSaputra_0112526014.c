#include <stdio.h>

int main() {
    float L, AREA, PERIMETER;

    // Step-2: Input Side Length of Square say L
    printf("Input Value of L: ");
    scanf("%f", &L);

    // Step-3: Area = L x L
    AREA = L * L;

    // Step-4: PERIMETER = 4 x L
    PERIMETER = 4 * L;

    // Step-5: Display AREA, PERIMETER
    printf("AREA = %f\n", AREA);
    printf("PERIMETER = %f\n", PERIMETER);

    return 0; // Step-6: Stop
}
