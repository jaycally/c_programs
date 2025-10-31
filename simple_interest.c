/*
 * Name: Joseph Thuo
 * Reg No: CT100/G/26202/25
 * Unit: Introduction to Programming and Algorithms
 * Assignment: Week 2 – Optional Task: Simple Interest
 */

#include <stdio.h>

int main() {
    float principal, time, rate, interest;

    // Prompt user for input
    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter time (in years): ");
    scanf("%f", &time);

    printf("Enter rate (%% per annum): ");
    scanf("%f", &rate);

    // Calculate simple interest
    interest = (principal * time * rate) / 100;

    // Display result
    printf("Simple Interest = %.2f\n", interest);

    return 0;
}