#include <stdio.h>
int main() {
    int pin, digit, sum = 0, temp;
    printf("Enter a 4-digit PIN: ");
    scanf("%d", &pin);
    temp = pin;
    while (temp > 0) {
        digit = temp % 10;
        sum += digit;
        temp /= 10;
    }
    printf("Sum of digits: %d\n", sum);
    if (sum > 10)
        printf("Strong PIN\n");
    else
        printf("Weak PIN\n");
    return 0;
}
