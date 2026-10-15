#include <stdio.h>

/* Discard leftover characters in the input buffer after a bad read */
void clearInput(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
        /* keep discarding */
    }
}

int main(void) {
    int numStudents = 0;
    int passed = 0;
    int failed = 0;
    int count = 1;

    /* 1. Ask for the number of students (must be at least 1) */
    while (numStudents < 1) {
        printf("Enter the number of students: ");
        if (scanf("%d", &numStudents) != 1) {
            printf("Invalid input. Please enter a whole number.\n");
            clearInput();
            numStudents = 0;
        } else if (numStudents < 1) {
            printf("Please enter a number greater than 0.\n");
        }
    }

    /* 2. Use a while loop to process each student's score */
    while (count <= numStudents) {
        int score;
        char grade;
        const char *description;

        printf("\nEnter score for student %d (0-100): ", count);

        if (scanf("%d", &score) != 1) {
            printf("Invalid input. Please enter a whole number.\n");
            clearInput();
            continue;
        }

        /* 3. Validate that the score is between 0 and 100 */
        if (score < 0 || score > 100) {
            printf("Score must be between 0 and 100. Try again.\n");
            continue; /* re-prompt for the same student */
        }

        /* 4. Classify the score using if-else-if */
        if (score >= 90) {
            grade = 'A';
        } else if (score >= 80) {
            grade = 'B';
        } else if (score >= 70) {
            grade = 'C';
        } else if (score >= 60) {
            grade = 'D';
        } else {
            grade = 'F';
        }

        /* 5. Use a switch statement to display the grade description */
        switch (grade) {
            case 'A':
                description = "Excellent";
                break;
            case 'B':
                description = "Very Good";
                break;
            case 'C':
                description = "Good";
                break;
            case 'D':
                description = "Passed (Satisfactory)";
                break;
            default:
                description = "Failed";
                break;
        }

        printf("Score: %d | Grade: %c | %s\n", score, grade, description);

        /* Track pass/fail counts */
        if (score >= 60) {
            passed++;
        } else {
            failed++;
        }

        count++;
    }

    /* 6. Display the number of students who passed and failed */
    printf("\n===== SUMMARY =====\n");
    printf("Total students: %d\n", numStudents);
    printf("Passed (60 and above): %d\n", passed);
    printf("Failed (below 60): %d\n", failed);

    return 0;
}
