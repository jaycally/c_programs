/*
 * Name: Joseph Thuo
 * Reg No: CT100/G/26202/25
 * Unit: Introduction to Programming and Algorithms
 * Assignment: Week 4 – Task 4: Password Login using Do While Loop
 */

#include <stdio.h>
#include <string.h>

int main() {
    char password[10];

    // Keep prompting until correct password is entered
    do {
        printf("Enter password: ");
        scanf("%s", password);
    } while (strcmp(password, "1234") != 0);

    printf("Access Granted\n");

    return 0;
}