/*
 * Name: Joseph Thuo
 * Reg No: CT100/G/26202/25
 * Unit: Introduction to Programming and Algorithms
 * Assignment: Week 1 – Task 2: User Input Program
 */

#include <stdio.h>

int main() {
    float height;           // Height in meters or centimeters
    double bank_balance;    // Bank balance in Kenya shillings
    char phone[20];         // Phone number as string

    // Prompt user for input
    printf("Enter your height (in meters or centimeters): ");
    scanf("%f", &height);

    printf("Enter your bank balance (KES): ");
    scanf("%lf", &bank_balance);

    printf("Enter your phone number: ");
    scanf("%s", phone);

    // Display collected input
    printf("\n--- User Details ---\n");
    printf("Height: %.2f\n", height);
    printf("Bank Balance: %.2lf KES\n", bank_balance);
    printf("Phone Number: %s\n", phone);

    return 0;
}