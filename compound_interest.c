/*
 * Name: Joseph Thuo
 * Reg No: CT100/G/26202/25
 * Unit: Introduction to Programming and Algorithms
 * Assignment: Week 2 – Optional Task: Compound Interest
 */

#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, amount, interest;

    // Prompt user for input
    printf("Enter principal amount: ");
    scanf("%lf", &principal);

    printf("Enter time (in years): ");
    scanf("%lf", &time);

    printf("Enter rate (%% per annum): ");
    scanf("%lf", &rate);

    // Calculate compound interest
    amount = principal * pow((1 + rate / 100), time);
    interest = amount - principal;

    // Display result
    printf("Compound Interest = %.2lf\n", interest);

    return 0;
}