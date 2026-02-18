#include <stdio.h>

int main() {
    int n;
    long long catalan;

    printf("=== Catalan Number Series Calculator ===\n");
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("\n--- Catalan Series (First %d Terms) ---\n\n", n);

    for (int i = 0; i < n; i++) {
        // Calculate C(2i, i) using loop
        long long numerator = 1, denominator = 1;

        for (int j = 0; j < i; j++) {
            numerator *= (2 * i - j);
            denominator *= (j + 1);
        }

        catalan = (numerator / denominator) / (i + 1);

        printf("C(%d) = %lld\n", i, catalan);
    }

    printf("\n--- End of Series ---\n");

    return 0;
}
