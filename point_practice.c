#include <stdio.h>

int main() {
    int* p, i = 3;
    char string[] = "abcdefg"; // {"abcdefg"}
    //char *string;
    //gets(string);
    p = &i;
    printf("%p\n", p);
    printf("%p\n", *&p);
    printf("%d\n", *p);
    printf("%lu\n", sizeof string);
    puts(string);
    return 0;
}
