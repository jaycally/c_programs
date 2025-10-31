/*
 * Name: Joseph Thuo
 * Reg No: CT100/G/26202/25
 * Unit: Introduction to Programming and Algorithms
 * Assignment: Week 6 – Task 2: Sum and Average of Array
 */

#include <stdio.h>

int main() {
    int numbers[5], sum = 0;
    float average;
    int i;

    // Input numbers
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    // Calculate average
    average = sum / 5.0;

    // Display results
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}