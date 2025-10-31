/*
 * Name: Joseph Thuo
 * Reg No: CT100/G/26202/25
 * Unit: Introduction to Programming and Algorithms
 * Assignment: Week 4 – Task 2: ATM Withdrawal using While Loop
 */

#include <stdio.h>

int main() {
    float balance;

    // Prompt user for initial balance
    printf("Enter initial account balance: ");
    scanf("%f", &balance);

    // Withdraw until balance is zero or negative
    while (balance > 0) {
        float withdraw;
        printf("Enter amount to withdraw: ");
        scanf("%f", &withdraw);

        balance -= withdraw;
        printf("Remaining balance: %.2f\n", balance);
    }

    printf("Insufficient funds. Transaction stopped.\n");

    return 0;
}