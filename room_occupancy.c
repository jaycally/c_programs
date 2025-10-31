/*
 * Name: Joseph Thuo
 * Reg No: CT100/G/26202/25
 * Unit: Introduction to Programming and Algorithms
 * Assignment: Week 6 – Task 2: Room Occupancy (2D Array)
 */

#include <stdio.h>

int main() {
    int occupancy[5][10];
    int floor, room;
    int occupied, vacant;

    // Simulate input: 1 = occupied, 0 = vacant
    printf("Enter room occupancy (1 = occupied, 0 = vacant):\n");
    for (floor = 0; floor < 5; floor++) {
        printf("Floor %d:\n", floor + 1);
        for (room = 0; room < 10; room++) {
            printf("  Room %d: ", room + 1);
            scanf("%d", &occupancy[floor][room]);
        }
    }

    // Count and display per floor
    for (floor = 0; floor < 5; floor++) {
        occupied = 0;
        vacant = 0;
        for (room = 0; room < 10; room++) {
            if (occupancy[floor][room] == 1) {
                occupied++;
            } else {
                vacant++;
            }
        }
        printf("\nFloor %d – Occupied: %d, Vacant: %d\n", floor + 1, occupied, vacant);
    }

    return 0;
}