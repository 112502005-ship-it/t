#include <stdio.h>
#include "student.h"

void input_student(Student *s) {
    printf("Enter student ID: ");
    scanf("%d", &s->id);
    printf("Enter student name: ");
    scanf("%s", s->name);
    for (int i = 0; i < 3; i++) {
        printf("Enter grade %d: ", i + 1);
        scanf("%f", &s->grades[i]);
    }
}

void print_student(const Student *s) {
    printf("\nStudent ID: %d\n", s->id);
    printf("Name: %s\n", s->name);
    printf("Grades: %.2f, %.2f, %.2f\n", s->grades[0], s->grades[1], s->grades[2]);
}
