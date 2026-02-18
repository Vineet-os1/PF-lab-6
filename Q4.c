#include <stdio.h>

int main() {
    int mark, count = 0;
    float sum = 0, average;

    printf("=== Student Marks Average Calculator ===\n");
    printf("Enter student marks (-1 to stop):\n\n");

    while (1) {
        printf("Enter mark: ");
        scanf("%d", &mark);

        if (mark == -1)
            break;

        sum += mark;
        count++;
    }

    printf("\n=== Results ===\n");
    printf("Total Students : %d\n", count);
    printf("Total Marks    : %.2f\n", sum);

    if (count > 0) {
        average = sum / count;
        printf("Average Marks  : %.2f\n", average);
    } else {
        printf("No marks were entered.\n");
    }
    return 0;
}
