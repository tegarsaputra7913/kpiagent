#include <stdio.h>
#include <math.h>

int main() {
    float A, B, C, S, AREA, PERIMETER;

    // Step-2: Input Sides of Triangle A,B,C
    printf("Input Value of A: ");
    scanf("%f", &A);
    printf("Input Value of B: ");
    scanf("%f", &B);
    printf("Input Value of C: ");
    scanf("%f", &C);

    // Step-3: S = (A + B + C) / 2.0
    S = (A + B + C) / 2.0;

    // Step-4: AREA = SQRT(S x (S-A) x (S-B) x (S-C))
    AREA = sqrt(S * (S - A) * (S - B) * (S - C));

    // Step-5: PERIMETER = A + B + C
    PERIMETER = A + B + C;

    // Step-6: Display AREA, PERIMETER
    printf("AREA = %f\n", AREA);
    printf("PERIMETER = %f\n", PERIMETER);

    return 0; // Step-7: Stop
}