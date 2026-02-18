#include <stdio.h>

int main() {
    int ticket, digit, reversed = 0;

    printf("Enter your ticket number: ");
    scanf("%d", &ticket);

    while (ticket > 0) {
        digit = ticket % 10;
        reversed = reversed * 10 + digit;
        ticket /= 10;
    }

    printf("Reversed ticket number: %d\n", reversed);

    return 0;
}
