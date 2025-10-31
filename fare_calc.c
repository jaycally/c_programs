/*
 * Name: Joseph Thuo
 * Reg No: CT100/G/26202/25
 * Unit: Introduction to Programming and Algorithms
 * Assignment: Week 5 – Task 2: Fare Calculator Function
 */

#include <stdio.h>

// Function to calculate fare based on distance
int calculateFare(int distance) {
    return distance * 50;
}

int main() {
    int km;
    printf("Enter distance traveled (in km): ");
    scanf("%d", &km);

    int fare = calculateFare(km);
    printf("Total Fare = KSh. %d\n", fare);

    return 0;
}