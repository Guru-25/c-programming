#include <stdio.h>
#include <string.h>

void main() {
    char *s1 = "Hello";
    char *s2 = " ";
    char *s3 = "World";
    char s4[20];
    strcat(s4, s1);
    strcat(s4, s2);
    strcat(s4, s3);
    printf("%s\n", s4);
}