/*
 * Name: Joseph Thuo
 * Reg No: CT100/G/26202/25
 * Unit: Introduction to Programming and Algorithms
 * Assignment: Week 6 – Task 3: Multi-Branch Occupancy (3D Array)
 */

#include <stdio.h>

int main() {
    int chain[3][5][10];
    int branch, floor, room;
    int total_occupied = 0;

    // Simulate input: 1 = occupied, 0 = vacant
    printf("Enter room occupancy for 3 branches (1 = occupied, 0 = vacant):\n");
    for (branch = 0; branch < 3; branch++) {
        printf("\nBranch %d:\n", branch + 1);
        for (floor = 0; floor < 5; floor++) {
            printf("  Floor %d:\n", floor + 1);
            for (room = 0; room < 10; room++) {
                printf("    Room %d: ", room + 1);
                scanf("%d", &chain[branch][floor][room]);
                if (chain[branch][floor][room] == 1) {
                    total_occupied++;
                }
            }
        }
    }

    printf("\nTotal Occupied Rooms Across All Branches: %d\n", total_occupied);

    return 0;
}