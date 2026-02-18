#include <stdio.h>

int main() {
    int n;

    printf("=== Multiplication Table Practice ===\n");
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("\n--- Multiplication Table of %d ---\n\n", n);

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    printf("\n--- End of Table ---\n");

    return 0;
}
