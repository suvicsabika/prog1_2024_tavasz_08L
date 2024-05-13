#include <stdio.h>
#include <string.h>

typedef struct {
    char first_name[32];
    char neptun_code[6];
    int age;
} Student;

void printf_student(Student *stu)
{
    printf("%s (%s), %d\n", stu->first_name, stu->neptun_code, stu->age);
}

int main()
{
    Student stu;

    stu.age = 21;
    strcpy(stu.first_name, "Csabi");
    strcpy(stu.neptun_code, "ABC123");

    printf("%s (%s), %d\n", stu.first_name, stu.neptun_code, stu.age);

    printf_student(&stu);

    return 0;
}