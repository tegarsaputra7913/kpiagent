#include <stdio.h>

int main() {
    float L, B, AREA, PERIMETER;

    // Step-2: Input Side Length & Breadth say L, B
    printf("Input Value of L: ");
    scanf("%f", &L);
    printf("Input Value of B: ");
    scanf("%f", &B);

    // Step-3: Area = L x B
    AREA = L * B;

    // Step-4: PERIMETER = 2 x ( L + B )
    PERIMETER = 2 * (L + B);

    // Step-5: Display AREA, PERIMETER
    printf("AREA = %f\n", AREA);
    printf("PERIMETER = %f\n", PERIMETER);

    return 0; // Step-6: Stop
}
