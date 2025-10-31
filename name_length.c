/*
 * Name: Joseph Thuo
 * Reg No: CT100/G/26202/25
 * Unit: Introduction to Programming and Algorithms
 * Assignment: Week 7 – Task 1: Count Characters in a Name
 */

#include <stdio.h>
#include <string.h>

int main() {
    char name[50];
    int length;

    printf("Enter your name: ");
    scanf("%s", name);

    length = strlen(name);
    printf("Your name has %d characters.\n", length);

    return 0;
}