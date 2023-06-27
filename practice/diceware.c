#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define MAX_LINE_LENGTH 256

int randGen() {
  int low = 1, high = 6;
  int num = (rand() % (high - low + 1)) + low;
  return num;
}

char* strGen() {
  int i;
  char ch;
  char* str = malloc(6 * sizeof(char));
  str[0] = '\0';
  
  for(i = 0; i < 5; i++) {
    ch = randGen() + '0';
    strcat(str, &ch);
  }
  return str;
}

char* wordGen() {
  char* num = strGen();
  char* newStr = malloc(100 * sizeof(char));
  char line[MAX_LINE_LENGTH];
  FILE* file = fopen("wordlist.txt", "r");

  while(fgets(line, sizeof(line), file) != NULL) {
    if(strstr(line, num) != NULL) {
      fclose(file);
      strcpy(newStr, line + 6);
      break;
    }
  }
  free(num);

  size_t len = strlen(newStr);
  if (len > 0 && newStr[len - 1] == '\n') {
    newStr[len - 1] = '\0';
  }
  return newStr;
}

int main() {
  int i, n;
  printf("Enter number of words (max 10): ");
  scanf("%d", &n);
  char pass[100];
  pass[0] = '\0';
  srand(time(NULL));
  for(i = 0; i < n; i++) {
    strcat(pass, wordGen());
    if (i < n - 1) {
      strcat(pass, " ");
    }
  }
  printf("\nYour randomly generated Diceware Password is:\n%s", pass);
  printf("\n");
  return 0;
}

