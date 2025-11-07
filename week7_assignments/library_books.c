// Joseph Thuo
// CT100/G/26202/25
// Introduction to Programming
// SPT 2103
// Week 7 – File Handling: Append book titles to borrowed_books.txt

#include <stdio.h>

int main() {
    FILE *file;
    char title[100];

    file = fopen("borrowed_books.txt", "a"); // Append mode
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter book title: ");
    fgets(title, sizeof(title), stdin);

    fprintf(file, "%s", title); // Write to file
    fclose(file);

    printf("Book title stored successfully.\n");
    return 0;
}