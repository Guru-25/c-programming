#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_WORD_LENGTH 100

int countArticles(FILE* file) {
    char word[MAX_WORD_LENGTH];
    int count = 0;

    while (fscanf(file, "%s", word) != EOF) {
        // Convert the word to lowercase for case-insensitive comparison
        for (int i = 0; word[i] != '\0'; i++) {
            word[i] = tolower(word[i]);
        }

        // Check if the word is an article
        if (strcmp(word, "a") == 0 || strcmp(word, "an") == 0 || strcmp(word, "the") == 0) {
            count++;
        }
    }

    return count;
}

int main() {
    // Open the text file for reading
    FILE* file = fopen("input.txt", "r");
    if (file == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }

    // Count the articles in the file
    int articleCount = countArticles(file);

    // Close the file
    fclose(file);

    printf("Number of articles in the file: %d\n", articleCount);

    return 0;
}