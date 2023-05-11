#include <stdio.h>
#include <string.h>

void main() {
    char *s = "David John";
    s++;
    printf("%s\n", s);
    printf("%c\n", *(s+3));
    printf("%d\n", strlen(s));
}