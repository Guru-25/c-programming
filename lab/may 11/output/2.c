#include <stdio.h>

void main() {
    int a[] = {10, 20, 30};
    int *p = a;
    printf("%d\t %d\t %d\t %d\n", a[0], *(a+0), *p, *(p+0));
    printf("%d\t %d\t %d\t %d\n", a[2], *(p+2));
    printf("%d\t %d\t %d\n", a, p);
    p++;
    printf("%d\t %d\t %d\n", a[0], *p, p[0]);
}