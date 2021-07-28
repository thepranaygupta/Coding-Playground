//03_PRANAY GUPTA
#include <stdio.h>

struct Student {
    int id;
    char *name;
    double percentage;
};

int main()
{
    struct Student s = {25, "Babai", 89.67};
    // s.id = 25;
    // s.name = "Babai";
    // s.percentage = 89.67;
    printf("Student ID = %d\nStudent Name = %s\nStudent Percentage = %.2lf", s.id, s.name, s.percentage);
    return 0;
}