#include <stdio.h>

int main() {
    // if do not initialize the array, elements' value will be random
    int numbers[10] = {0}, random_numbers[10], i;
    for (i = 0; i < 10; i++) {
        printf("number is %d\n", numbers[i]);
        printf("random number is %d\n", random_numbers[i]);
    }

    return 0;
}
