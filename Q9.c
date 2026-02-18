#include <stdio.h>

int main() {
    long long number, temp;
    int digit, evenCount = 0, oddCount = 0;

    printf("=== Electricity Meter Digit Analyzer ===\n");
    printf("Enter the meter reading: ");
    scanf("%lld", &number);

    temp = number;

    while (temp > 0) {
        digit = temp % 10;

        if (digit % 2 == 0)
            evenCount++;
        else
            oddCount++;

        temp /= 10;
    }

    printf("\n=== Analysis Report ===\n");
    printf("Meter Reading  : %lld\n", number);
    printf("Even Digits    : %d\n", evenCount);
    printf("Odd Digits     : %d\n", oddCount);
    printf("Total Digits   : %d\n", evenCount + oddCount);

    return 0;
}
