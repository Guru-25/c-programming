#include <stdio.h>

#define MAX_QUESTIONS 10

int main() {
    char Q[MAX_QUESTIONS][50] = {
        "The Earth is flat. (T/F)",
        "The capital of India is Mumbai. (T/F)",
        "The Great Wall of China is visible from space. (T/F)",
        "The human body has 206 bones. (T/F)",
        "Water boils at 100 degrees Celsius. (T/F)",
        "Mount Everest is the highest mountain in the world. (T/F)",
        "The sun rises in the east and sets in the west. (T/F)",
        "The United States of America has 50 states. (T/F)",
        "The first moon landing was in 1969. (T/F)",
        "The Statue of Liberty was a gift from France. (T/F)"
    };
    char A[MAX_QUESTIONS];
    int i, score = 0;
    printf("Answer the following true/false questions (T/F):\n");
    for (i = 0; i < MAX_QUESTIONS; i++) {
        printf("%d. %s ", i + 1, Q[i]);
        scanf(" %c", &A[i]);
        if (A[i] == 'T' || A[i] == 't' || A[i] == 'F' || A[i] == 'f') {
            if (A[i] == 'T' || A[i] == 't') {
                score++;
            }
        }
    }
    printf("You scored %d out of %d.\n", score, MAX_QUESTIONS);
    return 0;
}
