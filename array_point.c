#include <stdio.h>

int main() {
    char string[20] = "dfdfdgdfdgffdgd";
    char* string2;
    string2 = string;
    printf("%s\n", string2);
    printf("%p\n", string2);
    printf("%p\n", string);
}
