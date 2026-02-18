#include <stdio.h>

int main() {
    int attendance, present = 0, absent = 0;

    printf("=== Classroom Attendance System ===\n");
    printf("Enter 1 for Present, 0 for Absent\n\n");
    for (int i = 1; i <= 30; i++) {
        printf("Student %d: ", i);
        scanf("%d", &attendance);
        if (attendance == 1)
            present++;
        else
            absent++;
    }
    printf("\n=== Attendance Report ===\n");
    printf("Total Students : 30\n");
    printf("Present        : %d\n", present);
    printf("Absent         : %d\n", absent);
    return 0;
}
