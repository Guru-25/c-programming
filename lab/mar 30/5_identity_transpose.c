/* Perform the following operations in menu driven format:
        a. Find the given matrix is identity matrix or not
        b. Find the transpose of the given matrix */

#include <stdio.h>

int main()
{
    int choice, i, j, rows, cols, isIdentity = 1;

    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    printf("Enter the elements of the matrix: \n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nChoose an operation: \n");
    printf("1. Check if the matrix is an identity matrix\n");
    printf("2. Find the transpose of the matrix\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            for (i = 0; i < rows; i++)
            {
                for (j = 0; j < cols; j++)
                {
                    if ((i == j && matrix[i][j] != 1) || (i != j && matrix[i][j] != 0))
                    {
                        isIdentity = 0;
                        break;
                    }
                }
                if (isIdentity == 0)
                    break;
            }
            if (isIdentity)
                printf("The matrix is an identity matrix.\n");
            else
                printf("The matrix is not an identity matrix.\n");
            break;
        case 2:
            printf("The transpose of the matrix is: \n");
            for (i = 0; i < cols; i++)
            {
                for (j = 0; j < rows; j++)
                    printf("%d ", matrix[j][i]);
                printf("\n");
            }
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;
}
