#include <stdio.h>
#define bool int
#define false 0
#define true 1

int main() {
    struct stu {
        char *name;
        int age;
        bool male;
    };

    struct stu stu1;

    stu1.name = "victor";
    stu1.age = 12;
    stu1.male = true;

    printf("I am %s, %d years old, male? %d", stu1.name, stu1.age, stu1.male);

    return 0;
}
