#include <stdio.h>

int main() {
    char name[100];
    int age;
    int siblings;
    float height;
    char grade[30];
    char section[30];

    printf(" --- Input Information ---\n\n");

    printf("Enter your name: ");
    scanf(" %[^\n]", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your number of siblings: ");
    scanf("%d", &siblings);

    printf("Enter your height in meters: ");
    scanf("%f", &height);

    printf("Enter your grade: ");
    scanf(" %[^\n]", grade);

    printf("Enter your section: ");
    scanf(" %[^\n]", section);

    printf("\n--- Student Information ---\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Number of Siblings: %d\n", siblings);
    printf("Height: %.2f meters\n", height);
    printf("Grade: %s\n", grade);
    printf("Section: %s\n", section);

    return 0;
}
