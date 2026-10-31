#include <stdio.h> // Header file for standard input/output

int main() {
    int i, n;

    // 1. Input upper limit to the even numbers from user. Store it in variable n.
    printf("Enter upper limit: ");
    scanf("%d", &n);

    printf("Even numbers from 1 to %d:\n", n);

    // 2. Run a loop from 1, that runs till n, incrementing by 1 in each iteration.
    for (i = 1; i <= n; i++) {
        // 3. Inside the loop body, check even/odd condition using if(i % 2 == 0).
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}

