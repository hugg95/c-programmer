#include "stdio.h"
#include "my.h"

void test(const char* name, const int age) {
    printf("my name is %s, I am %d old now\n", name, age);
}

int main(int argc, char *argv[]) {
    printf("this program is in version %s\n", VERSION);
    test("victor", 10);
    return 0;
}
