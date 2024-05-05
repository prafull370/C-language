#include <stdio.h>
#include <string.h>

// Structure definition for a student
struct Student {
    int rollNumber;
    char name[50];
    float marks[5];
};

// Function to calculate overall percentage
float calculatePercentage(struct Student student) {
    float totalMarks = 0;
    for (int i = 0; i < 5; ++i) {
        totalMarks += student.marks[i];
    }
    return (totalMarks / 5.0);
}

int main() {
    // Declare an array of 50 students
    struct Student students[50];

    // Input details for 50 students
    for (int i = 0; i < 50; ++i) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);

        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Enter marks for 5 subjects:\n");
        for (int j = 0; j < 5; ++j) {
            printf("Subject %d: ", j + 1);
            scanf("%f", &students[i].marks[j]);
        }
    }

    // Print details of students with more than 80% overall marks
    printf("\nStudents with more than 80%% overall marks:\n");
    for (int i = 0; i < 50; ++i) {
        float percentage = calculatePercentage(students[i]);
        if (percentage > 80.0) {
            printf("Roll Number: %d\n", students[i].rollNumber);
            printf("Name: %s\n", students[i].name);
            printf("Overall Percentage: %.2f%%\n\n", percentage);
        }
    }

    return 0;
}
