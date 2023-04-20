#include <stdio.h>
#include <string.h>

#define MAX_NAMES 10
#define MAX_NAME_LENGTH 20

int main() {
    char names[MAX_NAMES][MAX_NAME_LENGTH];
    char temp[MAX_NAME_LENGTH];
    int i, j, n;
    printf("Enter the number of names (maximum %d): ", MAX_NAMES);
    scanf("%d", &n);
    printf("Enter %d names: \n", n);
    for (i = 0; i < n; i++) {
        scanf("%s", names[i]);
    }
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (strcmp(names[i], names[j]) < 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
    printf("Names in reverse alphabetical order:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }
    return 0;
}
