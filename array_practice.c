#include <stdio.h>

int main() {
    // if do not initialize the array, elements' value will be random
    int numbers[10] = {0};
    int real_numbers[10] = {0, 10, 23, 11, 2, 3, 6, 8, 9, 36};
    int random_numbers[10], i;

    for (i = 0; i < 10; i++) {
        printf("number is %d\n", numbers[i]);
        printf("real number is %d\n", real_numbers[i]);
        printf("random number is %d\n", random_numbers[i]);
    }

    return 0;
}
