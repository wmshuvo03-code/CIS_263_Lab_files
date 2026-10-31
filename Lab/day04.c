#include <stdio.h>

int main() {

    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    //if, else if, else statements
    if (marks >= 80){
        printf("Grade: A+\n");
    }
    else if (marks>=75 && marks<80){
        printf("Grade: A\n");
    }
    else if (marks>=70 && marks<75){
        printf("Grade: A-\n");
    }
    else if (marks>=65 && marks<70){
        printf("Grade: B+\n");
    }
    else if (marks>=60 && marks<65){
        printf("Grade: B\n");
    }
    else if (marks>=55 && marks<60){
        printf("Grade: B-\n");
    }
    else if (marks>=50 && marks<55){
        printf("Grade: C+\n");
    }
    else if (marks>=45 && marks<50){
        printf("Grade: C\n");
    }
    else if (marks>=40 && marks<45){
        printf("Grade: C-\n");
    }
    else{
        printf("Grade: F\n");
    }


    // switch case statement
    int choice;
    printf("1. Burger\n2. Pizza\n3. Pasta\nChoice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("You ordered a Burger.\n");
            break;
        case 2:
            printf("You ordered a Pizza.\n");
            break;
        case 3:
            printf("You ordered Pasta.\n");
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}

