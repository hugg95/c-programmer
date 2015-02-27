#include <stdio.h>

int length(int* array[]) {
    printf("%p\n", array);
    return (int)(sizeof(*array));
}

void dichotomy(int ordered[]) {
    int max, mid, min;
    //
}

int main() {
    //dichotomy();
    int test[10] = {10, 11, 9, 5, 9};
    int l = length(test);
    printf("%d\n", (int)(sizeof(test)/sizeof(test[0])));
    printf("---------------%p\n", test);
    printf("%d\n", l);
    printf("%d\n", '1'-'0');
    return 0;
}
