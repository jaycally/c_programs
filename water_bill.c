/*
 * Name: Joseph Thuo
 * Reg No: CT100/G/26202/25
 * Unit: Introduction to Programming and Algorithms
 * Assignment: Week 3 – Task 2: Water Bill Calculator
 */

#include <stdio.h>

int main() {
    int units;
    float bill;

    // Prompt user for water units consumed
    printf("Enter water units consumed: ");
    scanf("%d", &units);

    // Calculate bill based on consumption
    if (units <= 30) {
        bill = units * 20;
    } else if (units <= 60) {
        bill = units * 25;
    } else {
        bill = units * 30;
    }

    // Display total bill
    printf("Total water bill: %.2f KES\n", bill);

    return 0;
}