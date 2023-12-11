#include <stdio.h>
#include <string.h>

// Define structure for student
struct Student {
    char stud_name[50];
    char address[100];
};

// Function to swap two students
void swap(struct Student *a, struct Student *b) {
    struct Student temp = *a;
    *a = *b;
    *b = temp;
}

// Function to perform bubble sort on student names
void sortStudents(struct Student students[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(students[j].stud_name, students[j + 1].stud_name) > 0) {
                swap(&students[j], &students[j + 1]);
            }
        }
    }
}

// Function to accept student details
void inputStudents(struct Student students[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].stud_name);
        printf("Address: ");
        scanf("%s", students[i].address);
    }
}

// Function to display sorted student details
void displayStudents(struct Student students[], int n) {
    printf("\nStudent Details (Sorted by Name):\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].stud_name);
        printf("Address: %s\n", students[i].address);
    }
}

int main() {
    int n;

    // Accept the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Declare an array of students
    struct Student students[n];

    // Accept student details
    printf("Enter student details:\n");
    inputStudents(students, n);

    // Sort students by name
    sortStudents(students, n);

    // Display sorted student details
    displayStudents(students, n);

    return 0;
}
