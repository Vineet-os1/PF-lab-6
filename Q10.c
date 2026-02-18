#include <stdio.h>

int main() {
    int n, i, j;

    printf("=== Shopping Mall LED Banner ===\n");
    printf("Enter the size of the diamond: ");
    scanf("%d", &n);

    printf("\n--- Hollow Diamond Banner ---\n\n");

    // Upper half of diamond
    for (i = 1; i <= n; i++) {
        // Print leading spaces
        for (j = i; j < n; j++)
            printf(" ");

        // Print stars and hollow middle
        if (i == 1) {
            printf("*");
        } else {
            printf("*");
            for (j = 1; j < 2 * i - 2; j++)
                printf(" ");
            printf("*");
        }

        printf("\n");
    }

    // Lower half of diamond
    for (i = n - 1; i >= 1; i--) {
        // Print leading spaces
        for (j = n; j > i; j--)
            printf(" ");

        // Print stars and hollow middle
        if (i == 1) {
            printf("*");
        } else {
            printf("*");
            for (j = 1; j < 2 * i - 2; j++)
                printf(" ");
            printf("*");
        }

        printf("\n");
    }

    printf("\n--- End of Banner ---\n");

    return 0;
}
