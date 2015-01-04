#include <stdio.h>

int main() {
    // try to accept a string using function scanf
    char string[20];
    int number;
    scanf("%[^\t\n]s", &string);
    printf("string is %s\n", string);

    return 0;
}
