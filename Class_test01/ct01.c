#include <stdio.h>
#include <stdbool.h>

int main() {
    int student_id;
    char full_name[100];
    int age;
    float height;
    int regular_input; // 1 for true, 0 for false
    char grade;
    int marks;

    // --- Taking Inputs ---
    printf("Enter Student ID (integer): ");
    scanf("%d", &student_id);
    
    printf("Enter Full Name (string): ");
    scanf(" %[^\n]", full_name); // Reads string with spaces
    
    printf("Enter Age (integer): ");
    scanf("%d", &age);
    
    printf("Enter Height (float): ");
    scanf("%f", &height);
    
    printf("Is the student a regular student? (Enter 1 for true, 0 for false): ");
    scanf("%d", &regular_input);
    
    printf("Enter Grade (character A, B, C, etc.): ");
    scanf(" %c", &grade);
    
    printf("Enter Marks (integer): ");
    scanf("%d", &marks);

    // --- Displaying Outputs ---
    printf("\n--- Student Information ---\n");
    printf("Student ID: %d\n", student_id);
    printf("Full Name: %s\n", full_name);
    printf("Age: %d\n", age);
    printf("Height: %.2f\n", height);
    
    printf("Is the student a regular student?: ");
    if (regular_input == 1) {
        printf("true\n");
    } else {
        printf("false\n");
    }
    
    printf("Grade: %c\n", grade);
    printf("Marks: %d\n", marks);

    // --- Grade Calculation based on Marks ---
    printf("Calculated Grade: ");
    if (marks >= 80) {
        printf("A+\n");
    } else if (marks >= 75) {
        printf("A\n");
    } else if (marks >= 70) {
        printf("A-\n");
    } else if (marks >= 65) {
        printf("B+\n");
    } else if (marks >= 60) {
        printf("B\n");
    } else if (marks >= 55) {
        printf("B-\n");
    } else if (marks >= 50) {
        printf("C+\n");
    } else if (marks >= 45) {
        printf("C\n");
    } else {
        printf("Fail\n");
    }

    return 0;
}
