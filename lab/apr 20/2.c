#include <stdio.h>
#include <string.h>

int main() {
    char UN[10][15] = {"user1", "user2", "user3", "user4", "user5", "user6", "user7", "user8", "user9", "user10"};
    char PW[10][15] = {"password1", "password2", "password3", "password4", "password5", "password6", "password7", "password8", "password9", "password10"};
    char CM[10][20] = {"message1", "message2", "message3", "message4", "message5", "message6", "message7", "message8", "message9", "message10"};
    char username[15];
    char password[15];
    int i, index = -1;
    printf("Enter your username: ");
    scanf("%s", username);
    printf("Enter your password: ");
    scanf("%s", password);
    for (i = 0; i < 10; i++) {
        if (strcmp(UN[i], username) == 0 && strcmp(PW[i], password) == 0) {
            index = i;
            break;
        }
    }
    if (index == -1) {
        printf("Wrong username/password\n");
    } else {
        printf("Confidential message: %s\n", CM[index]);
    }
    return 0;
}
