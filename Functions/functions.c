#include <stdio.h>
#include <stdlib.h>

int sum(int first_number, int second_number)
{
    int result = first_number + second_number;
    return result;
}

void print_students(int students)
{
    printf("students = %d\n", students);
}

int main()
{
    int students = 0;
    int girls = 12;
    int boys = 9;
    students = sum(girls, boys);
    print_students(students);
    return EXIT_SUCCESS;
}
