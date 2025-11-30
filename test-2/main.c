#include <stdio.h>
#include "menu.h"
#include "student.h"

int main(void) {
    Student students[10];
    int count = 0;
    show_menu(students, &count);
    return 0;
}
