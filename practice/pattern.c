#include <stdio.h>

int fun1() {
  /*
     *
     * *
     * * *
     * * * *
     * * * * *
  */
  int row, col, n = 5;
  for (row = 1; row <= n; row++) {
    for (col = 1; col <= row; col++) {
      printf("* ");
    }
    printf("\n");
  }
  return 0;
}

int fun2() {
  /*
     * * * * *
     * * * * *
     * * * * *
     * * * * *
     * * * * *
  */
  int row, col, n = 5;
  for (row = 1; row <= n; row++) {
    for (col = 1; col <= n; col++) {
      printf("* ");
    }
    printf("\n");
  }
  return 0;
}

int fun3() {
  /*
     * * * * *
     * * * *
     * * *
     * *
     *
  */
  int row, col, n = 5;
  for (row = 1; row <= n; row++) {
    for (col = 1; col <= n + 1 - row; col++) {
      printf("* ");
    }
    printf("\n");
  }
  return 0;
}

int fun4() {
  /*
     1
     1 2
     1 2 3
     1 2 3 4
     1 2 3 4 5
  */
  int row, col, n = 5;
  for (row = 1; row <= n; row++) {
    for (col = 1; col <= row; col++) {
      printf("%d ", col);
    }
    printf("\n");
  }
  return 0;
}

int fun5() {
  /*
     *
     * *
     * * *
     * * * *
     * * * * *
     * * * *
     * * *
     * *
     *
  */
  int row, col, n = 5;
  for (row = 1; row <= 2 * n - 1; row++) {
    int totRow = row > n ? (2 * n - row) : row;
    for (col = 1; col <= totRow; col++) {
      printf("* ");
    }
    printf("\n");
  }
  return 0;
}

int fun6() {
  /*
         * 
        * * 
       * * * 
      * * * * 
     * * * * * 
      * * * * 
       * * * 
        * * 
         *
  */
  int row, col, n = 5;
  for (row = 1; row <= (2 * n) - 1; row++) {
    int totRow = row <= n ? row : ((2 * n) - 1) - (row - 1);

    int noOfSpace = n - totRow;
    for (int space = 1; space <= noOfSpace; space++) {
      printf(" ");
    }

    for (col = 1; col <= totRow; col++) {
      printf("* ");
    }
    printf("\n");
  }
  return 0;
}

int fun7() {
  /*
             1
           2 1 2
         3 2 1 2 3
       4 3 2 1 2 3 4
     5 4 3 2 1 2 3 4 5
  */
  int row, col, n = 5;
  for (row = 1; row <= n; row++) {
    for (int space = 1; space <= n - row; space++) {
      printf("  ");
    }
    for (col = row; col >= 1; col--) {
      printf("%d ", col);
    }
    for (col = 2; col <= row; col++) {
      printf("%d ", col);
    }
    printf("\n");
  }
  return 0;
}

int fun8() {
  /*
             1
           2 1 2
         3 2 1 2 3
       4 3 2 1 2 3 4
     5 4 3 2 1 2 3 4 5
       4 3 2 1 2 3 4
         3 2 1 2 3
           2 1 2
             1
  */
  int row, col, n = 5;
  for (row = 1; row <= (2 * n) - 1; row++) {
    int c = row <= n ? row : n - (row - n);
    int s = row <= n ? n - row : row - n;

    for (int space = 1; space <= s; space++) {
      printf("  ");
    }
    for (col = c; col >= 1; col--) {
      printf("%d ", col);
    }
    for (col = 2; col <= c; col++) {
      printf("%d ", col);
    }
    printf("\n");
  }
  return 0;
}

int main() {
  fun8();

  return 0;
}
