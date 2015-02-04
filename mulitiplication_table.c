#include <stdio.h>

void print_mulitiplication_table() {
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j < i + 1; j++) {
            printf("%d*%d=%d, ", i, j, i * j);
        }
        printf("\n");
    }
}

int main() {
    print_mulitiplication_table();
    return 0;
}
