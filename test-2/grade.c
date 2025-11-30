#include "grade.h"
float calculate_average(const Student *s) {
    float sum = 0;
    for (int i = 0; i < 3; i++) sum += s->grades[i];
    return sum / 3.0f;
}
