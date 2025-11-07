// Joseph Thuo
// CT100/G/26202/25
// Introduction to Programming – Week 7

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    char reg_no[20];
    int total_marks;
};

int main() {
    FILE *file;
    struct Student s;
    int n, i;

    file = fopen("results.dat", "wb");
    if (file == NULL) {
        printf("Error creating file.\n");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);
    fflush(stdin);

    for (i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: ");
        scanf("%[^\n]%*c", s.name);
        printf("Reg No: ");
        scanf("%[^\n]%*c", s.reg_no);
        printf("Total Marks: ");
        scanf("%d", &s.total_marks);
        fflush(stdin);

        fwrite(&s, sizeof(s), 1, file);
    }

    fclose(file);
    printf("\nRecords saved to results.dat\n");
    return 0;
}