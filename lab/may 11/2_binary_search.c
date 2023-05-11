#include <stdio.h>

int main() {
    int array[] = {10, 20, 30, 40, 50};
    int n = sizeof(array) / sizeof(array[0]);
    int search = 30;
    int low = 0, high = n - 1, mid, flag = -1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (*(array+mid) == search) {
            flag = mid;
            break;
        }
        else if (*(array+mid) < search)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if (flag != -1)
        printf("element is found at index %d", flag);
    else
        printf("element is not found");

    return 0;
}
