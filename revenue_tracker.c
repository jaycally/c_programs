/*
 * Name: Joseph Thuo
 * Reg No: CT100/G/26202/25
 * Unit: Introduction to Programming and Algorithms
 * Assignment: Week 6 – Task 1: Weekly Revenue Tracker (1D Array)
 */

#include <stdio.h>

int main() {
    int revenue[7];
    int i, total = 0;
    float average;

    // Input revenue for each day
    printf("Enter revenue for each day of the week:\n");
    for (i = 0; i < 7; i++) {
        printf("Day %d: ", i + 1);
        scanf("%d", &revenue[i]);
        total += revenue[i];
    }

    average = total / 7.0;

    // Display results
    printf("\nTotal Weekly Revenue: %d KES\n", total);
    printf("Average Daily Revenue: %.2f KES\n", average);

    return 0;
}