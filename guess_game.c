/*
 * Name: Joseph Thuo
 * Reg No: CT100/G/26202/25
 * Unit: Introduction to Programming and Algorithms
 * Assignment: Week 4 – Task 3: Number Guessing Game
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret, guess, attempts = 0;

    // Generate random number between 1 and 20
    srand(time(0));
    secret = rand() % 20 + 1;

    // Prompt user to guess until correct
    do {
        printf("Enter your guess (1-20): ");
        scanf("%d", &guess);
        attempts++;

        if (guess > secret) {
            printf("Too high!\n");
        } else if (guess < secret) {
            printf("Too low!\n");
        } else {
            printf("Congratulations! You guessed it in %d attempts.\n", attempts);
        }
    } while (guess != secret);

    return 0;
}