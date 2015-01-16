#include <stdio.h>

int main() {
    int *p, i = 3;
    p = &i;
    printf("%p\n", p);
    return 0;
}
