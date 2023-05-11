#include <stdio.h>

void main() {
    int array[] = {10, 20, 30, 40, 50};
    int n = sizeof(array) / sizeof(array[0]);
    int search = 30;
    int i, flag = -1;
    for (i = 0; i < n; i++) {
        if (*(array + i) == search)
            flag = i;
    }

    if (flag != -1)
        printf("element is found at index %d", flag);
    else
        printf("element is not found");
}
