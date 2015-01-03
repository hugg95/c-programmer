#include <stdio.h>

int main() {
    char c;
    int i;
    short s;
    long l;
    float f;
    double d;

    printf("size of char is %d, int is %d\n"
            "short int is %d, long int is %d\n"
            "float is %d, double is %d\n",
            (int)sizeof c, (int)sizeof i, (int)sizeof s, (int)sizeof l, (int)sizeof f, (int)sizeof d);
    return 0;
}
