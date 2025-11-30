#include <stdio.h>
#include "menu.h"
#include "grade.h"
#include "utils.h"

void show_menu(Student *students, int *count) {
    int choice;
    do {
        print_line();
        printf("Student Management System\n");
        print_line();
        printf("1. Add Student\n");
        printf("2. Show Students\n");
        printf("3. Calculate Average\n");
        printf("0. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (*count < 10) {
                    input_student(&students[*count]);
                    (*count)++;
                } else printf("Max student limit reached.\n");
                break;
            case 2:
                for (int i = 0; i < *count; i++) print_student(&students[i]);
                break;
            case 3:
                for (int i = 0; i < *count; i++) {
                    float avg = calculate_average(&students[i]);
                    printf("Average for %s: %.2f\n", students[i].name, avg);
                }
                break;
            case 0:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 0);
}
