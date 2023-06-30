// Reading and Writing Files: Write a program to read data from one file and write it to another file.

#include<stdio.h>
#include<string.h>

int main() {
  char line[256];
  int count = 0;
  FILE* file1 = fopen("file1.txt", "r");
  FILE* file2 = fopen("file2.txt", "w");

  while(fgets(line, sizeof(line), file1) != NULL) {
    fprintf(file2, "%s", line);

  fclose(file1);
  fclose(file2);
  return 0;
  }
}

---

// Counting Characters: Write a program to count the number of characters in a file (excluding spaces and newlines).

#include<stdio.h>
#include<string.h>

int main() {
  char line[256];
  int count = 0;
  FILE* file1 = fopen("file1.txt", "r");

  while(fgets(line, sizeof(line), file1) != NULL) {
    for(int i = 0; i < strlen(line); i++) {
      if(line[i] != ' ' && line[i] != '\n') {
        count++;
      }
    }
  }
  printf("%d\n", count);

  fclose(file1);
  return 0;
}

// Line Count: Write a program to count the number of lines in a file.

#include<stdio.h>
#include<string.h>

int main() {
  char line[256];
  int count = 0;
  FILE* file1 = fopen("file1.txt", "r");

  while(fgets(line, sizeof(line), file1) != NULL) {
    count++;
  }
  printf("%d\n", count);

  fclose(file1);
  return 0;
}

// Word Count: Write a program to count the number of words in a file.

#include <stdio.h>
#include <string.h>

int main() {
  char word[50];
  int count = 0;

  FILE* file1 = fopen("file1.txt", "r");

  while(fscanf(file1, "%s", line) != EOF) {
      count++;
  }

  printf("%d\n", count);

  fclose(file1);
  return 0;
}

// Searching and Replacing: Write a program to search for a specific word in a file and replace it with another word.

#include <stdio.h>
#include <string.h>

int main() {
  char word[50];
  char line[256];
  FILE* file = fopen("file.txt", "r+");
  FILE* temp = fopen("temp.txt", "w+");
  char search[5] = "nice";
  char replace[5] = "super";

  while(fscanf(file, "%s", word) != EOF) {
    if(strcmp(word, search) == 0) {
      fprintf(temp, "%s ", replace);
    }
    else {
      fprintf(temp, "%s ", word);
    }
  }
  rewind(temp);
  rewind(file);

  while(fgets(line, sizeof(line), temp) != NULL) {
    fprintf(file, "%s", line);
  }
  remove("temp.txt");

  fclose(file);
  return 0;
}

// File Concatenation: Write a program to concatenate the contents of two files into a third file.

#include <stdio.h>

int main() {
  char line[256];
  FILE* file1 = fopen("file1.txt", "r");
  FILE* file2 = fopen("file2.txt", "r");
  FILE* file = fopen("file.txt", "w+a");

  while(fgets(line, sizeof(line), file1) != NULL) {
    fprintf(file, "%s", line);
  }
  fprintf(file, "%s", "\n");
  while(fgets(line, sizeof(line), file2) != NULL) {
    fprintf(file, "%s", line);
  }
  
  fclose(file);
  fclose(file1);
  fclose(file2);
  return 0;
}

// print odd lines in one file and even lines in another file (asked in PSUC TERMINAL)

#include <stdio.h>

int main() {
  char line[256];
  int flag = 0;
  FILE* file = fopen("file.txt", "r");
  FILE* file1 = fopen("file1.txt", "w");
  FILE* file2 = fopen("file2.txt", "w");

  while(fgets(line, sizeof(line), file) != NULL) {
    if(flag % 2 == 0) {
      fprintf(file1, "%s", line);
    }
    else {
      fprintf(file2, "%s", line);
    }
    flag++;
  }

  fclose(file);
  fclose(file1);
  fclose(file2);
  return 0;
}

// File Encryption and Decryption: Write a program to encrypt the contents of a file and store the encrypted data in another file. Then, write a program to decrypt the encrypted file and display the original contents.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char line[256];
  char word[50];
  FILE* file = fopen("file.txt", "r");
  FILE* enc = fopen("enc.txt", "w+");

  while(fgets(line, sizeof(line), file) != NULL) {
    for(int i = 0; i < strlen(line); i++) {
      fprintf(enc, "%d ", line[i] + 458888);
    }
  }
  
  rewind(enc);

  while(fscanf(enc, "%s", word) != EOF) {
    int charInt = atoi(word);
    printf("%c", charInt - 458888);
  }
  printf("\n");
  
  return 0;
  fclose(file);
  fclose(enc);
}

// File Sorting: Write a program to read a list of names from a file and sort them in alphabetical order. Store the sorted names in another file.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char word[50];
  char arr[50][50];
  int flag = 0, i, j;
  char temp[50];
  FILE* file = fopen("file.txt", "r");
  FILE* sort = fopen("sort.txt", "w");

  while(fscanf(file, "%s", word) != EOF) {
    strcpy(arr[flag], word);
    flag++;
  }

  for(i = 0; i < flag; i++) {
    for(j = i + 1; j < flag; j++) {
      if(strcmp(arr[i], arr[j]) > 0) {
        strcpy(temp, arr[i]);
        strcpy(arr[i], arr[j]);
        strcpy(arr[j], temp);
      }
    }
  }

  for(i = 0; i < flag; i++) {
    fprintf(sort, "%s\n", arr[i]);
  }

  fclose(file);
  fclose(sort);
  return 0;
}
