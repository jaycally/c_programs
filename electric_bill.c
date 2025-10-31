/*
 * Name: Joseph Thuo
 * Reg No: CT100/G/26202/25
 * Unit: Introduction to Programming and Algorithms
 * Assignment: Week 5 – Task 1: Electric Bill Function
 */

#include <stdio.h>

// Function to calculate electric bill based on units consumed
int calculateElectricBill(int units) {
    int bill = 0;

    if (units <= 100) {
        bill = units * 10;
    } else if (units <= 200) {
        bill = 100 * 10 + (units - 100) * 15;
    } else {
        bill = 100 * 10 + 100 * 15 + (units - 200) * 20;
    }

    return bill;
}

int main() {
    int units;
    printf("Enter number of units consumed: ");
    scanf("%d", &units);

    int total = calculateElectricBill(units);
    printf("Total Electric Bill = KSh. %d\n", total);

    return 0;
}