#include <stdio.h>
#include <string.h>

void main() {
    char *s1 = "Hello World";
    char *s2;
    strcpy(s2, s1);
    printf("%s\n", s2);
}