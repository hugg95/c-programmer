#include <stdio.h>

int main() {
    int in, lines;
    while ((in = getchar()) != EOF) {
        if (in == '\n') {
            ++lines;
        }
    }
    printf("lines is: %d\n", lines);
    return 0;
}
