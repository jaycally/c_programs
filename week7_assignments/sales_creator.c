// Joseph Thuo
// CT100/G/26202/25
// Introduction to Programming
// SPT 2103
// Week 7 – File Handling: Read and sum transactions from sales.txt

#include <stdio.h>

int main() {
    FILE *file;
    float amount, total = 0.0;

    // Check if file exists
    file = fopen("sales.txt", "r");
    if (file == NULL) {
        // Create sample file
        file = fopen("sales.txt", "w");
        fprintf(file, "120.50\n89.99\n45.00\n200.00\n");
        fclose(file);
        printf("sales.txt created with sample data.\n");
        return 0;
    }

    // Read and sum transactions
    while (fscanf(file, "%f", &amount) == 1) {
        total += amount;
    }

    fclose(file);
    printf("Total Sales for the Day: %.2f\n", total);
    return 0;
}