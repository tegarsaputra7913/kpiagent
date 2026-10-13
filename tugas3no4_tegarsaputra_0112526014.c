#include <stdio.h>

int main() {
    float R, AREA, PERIMETER;

    // Step-2: Input Radius of Circle say R
    printf("Input Value of R: ");
    scanf("%f", &R);

    // Step-3: Area = 22.0/7.0 x R x R
    AREA = (22.0 / 7.0) * R * R;

    // Step-4: PERIMETER = 2 x 22.0/7.0 x R
    PERIMETER = 2 * (22.0 / 7.0) * R;

    // Step-5: Display AREA, PERIMETER
    printf("AREA = %f\n", AREA);
    printf("PERIMETER = %f\n", PERIMETER);

    return 0; // Step-6: Stop
}
