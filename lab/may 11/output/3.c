#include <stdio.h>
#include <string.h>

void main() {
    char *s = "Today is Wednesday";
    printf("%s\n", s);
    printf("%c\n", s[0]);
    printf("%d\n", strlen(s));
    printf("%c\n", *s);
    printf("%c\n", s[strlen(s)-1]);
}