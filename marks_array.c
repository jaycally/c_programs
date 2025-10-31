/*
 * Name: Joseph Thuo
 * Reg No: CT100/G/26202/25
 * Unit: Introduction to Programming and Algorithms
 * Assignment: Week 6 – Task 1: Store and Display Marks
 */

#include <stdio.h>

int main() {
    int marks[5];
    int i;

    // Input marks
    printf("Enter marks for 5 subjects:\n");
    for (i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    // Display marks
    printf("\n--- Marks Entered ---\n");
    for (i = 0; i < 5; i++) {
        printf("Subject %d: %d\n", i + 1, marks[i]);
    }

    return 0;
}