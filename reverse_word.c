/*
 * Name: Joseph Thuo
 * Reg No: CT100/G/26202/25
 * Unit: Introduction to Programming and Algorithms
 * Assignment: Week 7 – Task 3: Reverse a Word
 */

#include <stdio.h>
#include <string.h>

int main() {
    char word[50], reversed[50];
    int i, len;

    printf("Enter a word: ");
    scanf("%s", word);

    len = strlen(word);

    for (i = 0; i < len; i++) {
        reversed[i] = word[len - 1 - i];
    }
    reversed[len] = '\0';

    printf("Reversed word: %s\n", reversed);

    return 0;
}