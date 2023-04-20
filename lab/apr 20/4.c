#include <stdio.h>
#include <string.h>

#define MAX_FRIENDS 10
#define MAX_NAME_LENGTH 30

int main() {
    char Fname[2][MAX_FRIENDS][MAX_NAME_LENGTH];
    int i, j;
    printf("Enter the first and last name of %d friends:\n", MAX_FRIENDS);
    for (i = 0; i < MAX_FRIENDS; i++) {
        printf("Friend %d: ", i + 1);
        scanf("%s %s", Fname[0][i], Fname[1][i]);
    }
    printf("First and last name of friends:\n");
    for (i = 0; i < MAX_FRIENDS; i++) {
        printf("%s %s\n", Fname[0][i], Fname[1][i]);
    }
    return 0;
}
