#include <stdio.h>

int main() {
    int in, chars;
    while ((in = getchar()) != EOF) {
        if (in != '\n') {
            ++chars;
        }
    }

    printf("number of chars is: %d\n", chars);
}
