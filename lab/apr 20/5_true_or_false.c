/* Let Q[][] be a number of T/F questions and A[][] be the answers of the questions. Consider 10 questions and each contains one mark. Display all the question and get the answers from user. Calculate the score. */

#include <stdio.h>
#include <string.h>

int main()
{
    char Q[10][100] = {
        "The capital of Australia is Sydney. (T/F)",
        "The Great Wall of China is the only man-made structure visible from space. (T/F)",
        "Jupiter is the largest planet in our solar system. (T/F)",
        "Diamonds are made of compressed coal. (T/F)",
        "The human body has 206 bones. (T/F)",
        "Mount Everest is the tallest mountain in the world. (T/F)",
        "The Nile River is the longest river in the world. (T/F)",
        "The Statue of Liberty was a gift from France to the United States. (T/F)",
        "The sun sets in the east. (T/F)",
        "Goldfish have a memory span of only a few seconds. (T/F)"};

    char A[10][1] = {'F','F','T','F','T','T','F','T','F','F'};
    char UA[10][1];
    int i, score = 0, j;

    printf("Enter answers:\n");

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 1; j++)
        {
            printf("%d.", i + 1);
            scanf(" %c", &UA[i][j]);
        }
    }
    printf("%s", UA);
    printf("%s", A);
}


