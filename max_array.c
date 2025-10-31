/*
 * Name: Joseph Thuo
 * Reg No: CT100/G/26202/25
 * Unit: Introduction to Programming and Algorithms
 * Assignment: Week 6 – Task 3: Find Maximum Value in Array
 */

#include <stdio.h>

int main() {
    int data[5], max;
    int i;

    // Input values
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &data[i]);
    }

    // Find maximum
    max = data[0];
    for (i = 1; i < 5; i++) {
        if (data[i] > max) {
            max = data[i];
        }
    }

    // Display result
    printf("Maximum value = %d\n", max);

    return 0;
}