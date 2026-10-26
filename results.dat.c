#include <stdio.h>

struct Student {
    char name[50];
    char regNo[20];
    float marks;
};

int main() {
    FILE *fp;
    struct Student s;

    fp = fopen("results.dat", "wb");

    if (fp == NULL) {
        printf("Error creating file.\n");
        return 1;
    }

    struct Student students[] = {
        {"John", "REG001", 78},
        {"Mary", "REG002", 85},
        {"Peter", "REG003", 69}
    };

    fwrite(students, sizeof(struct Student), 3, fp);
    fclose(fp);

    fp = fopen("results.dat", "rb");

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while (fread(&s, sizeof(s), 1, fp) == 1) {
        printf("Name: %s\n", s.name);
        printf("Registration Number: %s\n", s.regNo);
        printf("Total Marks: %.2f\n\n", s.marks);
    }

    fclose(fp);

    return 0;
}