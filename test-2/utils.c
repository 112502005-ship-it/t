#include <stdio.h>
#include "utils.h"
void print_line(void) {
    printf("-------------------------------\n");
}
void clear_input_buffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}
