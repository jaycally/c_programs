/*
 * Name: Joseph Thuo
 * Reg No: CT100/G/26202/25
 * Unit: Introduction to Programming and Algorithms
 * Assignment: Week 2 – Task 2: Bank Loan Eligibility
 */

#include <stdio.h>

int main() {
    int age;
    double income;

    // Prompt user for age and income
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your annual income (KES): ");
    scanf("%lf", &income);

    // Check loan eligibility
    if (age >= 21 && income >= 21000) {
        printf("Congratulations, you qualify for a loan.\n");
    } else {
        printf("Unfortunately, we are unable to offer you a loan at this time.\n");
    }

    return 0;
}