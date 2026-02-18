#include <stdio.h>

int main() {
    int n;
    long long factorial = 1;

    printf("=== Factorial Game Reward Calculator ===\n");
    printf("Enter your score: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Invalid input! Score cannot be negative.\n");
    } else {
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }

        printf("\n=== Results ===\n");
        printf("Score entered  : %d\n", n);
        printf("Factorial (%d!) : %lld\n", n, factorial);
        printf("Game Reward    : %lld points\n", factorial);
    }

    return 0;
}
