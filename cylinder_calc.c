/*
 * Name: Joseph Thuo
 * Reg No: CT100/G/26202/25
 * Unit: Introduction to Programming and Algorithms
 * Assignment: Week 2 – Task 1: Cylinder Volume and Surface Area
 */

#include <stdio.h>
#define PI 3.1416

int main() {
    float radius, height;
    float volume, surface_area;

    // Prompt user for radius and height
    printf("Enter radius of the cylinder: ");
    scanf("%f", &radius);

    printf("Enter height of the cylinder: ");
    scanf("%f", &height);

    // Calculate volume and surface area
    volume = PI * radius * radius * height;
    surface_area = 2 * PI * radius * radius + 2 * PI * radius * height;

    // Display results
    printf("\nVolume of Cylinder = %.2f\n", volume);
    printf("Surface Area of Cylinder = %.2f\n", surface_area);

    return 0;
}