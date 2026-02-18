#include <stdio.h>

int main() {
    int number, reversed = 0, digit, temp;

    printf("=== Library Book Code Validator ===\n");
    printf("Enter the book code: ");
    scanf("%d", &number);

    temp = number;

    while (temp > 0) {
        digit = temp % 10;
        reversed = reversed * 10 + digit;
        temp /= 10;
    }

    printf("\n=== Validation Report ===\n");
    printf("Original Code : %d\n", number);
    printf("Reversed Code : %d\n", reversed);

    if (number == reversed)
        printf("Result        : Valid Code (Palindrome)\n");
    else
        printf("Result        : Invalid Code (Not a Palindrome)\n");

    return 0;
}
