// Joseph Thuo
// CT100/G/26202/25
// Introduction to Programming
// SPT 2103
// Week 7 – File Handling: Read and sum transactions from sales.txt

#include <stdio.h>

int main() {
    FILE *file;
    float amount, total = 0.0;

    file = fopen("sales.txt", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while (fscanf(file, "%f", &amount) == 1) {
        total += amount;
    }

    fclose(file);
    printf("Total Sales for the Day: %.2f\n", total);
    return 0;
}