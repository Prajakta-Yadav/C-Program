#include<stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};


int main() {
    int choice;

    while(1) {
        printf("\n===== Student Management System =====\n");
        printf("1. Add Student\n");
        printf("2. View Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: addStudent(); break;
            case 2: viewStudents(); break;
            case 3: searchStudent(); break;
            case 4: updateStudent(); break;
            case 5: deleteStudent(); break;
            case 6: exit(0);
            default: printf("Invalid choice!\n");
        }
    }
}

void addStudent() {
    FILE *fp;
    struct Student s;

    fp = fopen("students.txt", "a");

    printf("Enter Roll Number: ");
    scanf("%d", &s.roll);

    printf("Enter Name: ");
    scanf(" %s [^\n]", s.name);

    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    fprintf(fp, "%d %s %.2f\n", s.roll, s.name, s.marks);

    fclose(fp);

    printf("Student added successfully!\n");
}

void viewStudents() {
    FILE *fp;
    struct Student s;

    fp = fopen("students.txt", "r");

    if(fp == NULL) {
        printf("No records found.\n");
        return;
    }

    while(fscanf(fp, "%d %s %f", &s.roll, s.name, &s.marks) != EOF) {
        printf("Roll: %d | Name: %s | Marks: %.2f\n", s.roll, s.name, s.marks);
    }

    fclose(fp);
}

void searchStudent() {
    FILE *fp;
    struct Student s;
    int roll, found = 0;

    printf("Enter Roll Number to search: ");
    scanf("%d", &roll);

    fp = fopen("students.txt", "r");

    while(fscanf(fp, "%d %s %f", &s.roll, s.name, &s.marks) != EOF) {
        if(s.roll == roll) {
            printf("Found: %d %s %.2f\n", s.roll, s.name, s.marks);
            found = 1;
            break;
        }
    }

    if(!found)
        printf("Student not found.\n");

    fclose(fp);
}

void deleteStudent() {
    FILE *fp, *temp;
    struct Student s;
    int roll, found = 0;

    printf("Enter Roll Number to delete: ");
    scanf("%d", &roll);

    fp = fopen("students.txt", "r");
    temp = fopen("temp.txt", "w");

    while(fscanf(fp, "%d %s %f", &s.roll, s.name, &s.marks) != EOF) {
        if(s.roll != roll) {
            fprintf(temp, "%d %s %.2f\n", s.roll, s.name, s.marks);
        } else {
            found = 1;
        }
    }

    fclose(fp);
    fclose(temp);

    remove("students.txt");
    rename("temp.txt", "students.txt");

    if(found)
        printf("Student deleted successfully!\n");
    else
        printf("Student not found.\n");
}