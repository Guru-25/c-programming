#include <stdio.h>

int main()
    {
        int r, k, d, g = 0, i, j, e=1;
        printf("Press 1 for addition of matrix.\nPress 2 for multiplication of matrix.\nPress 3 for exit.\n");
        while (e)
        {
            int a[10][10], b[10][10], c[10][10];

            printf("Enter the choice : ");
            scanf("%d", &d);

            if (d==1)
            {
                printf("Enter the number of rows: ");
                scanf("%d", &r);    
                printf("Enter the number of columns : ");
                scanf("%d", &k);
                printf("Enter the numbers of matrix A.\n");
                for (i = 0 ; i < r ; i++)
                {
                    for (j = 0 ; j < k ; j++)
                    {
                        printf("Enter the number : ");
                        scanf("%d", &a[i][j]);
                    }
                }

                printf("Enter the numbers of matrix B.\n");
                for (i = 0 ; i < r ; i++)
                {
                    for (j = 0 ; j < k ; j++)
                    {
                        printf("Enter the number : ");
                        scanf("%d", &b[i][j]);
                    }
                }

                for (i = 0 ; i < r ; i++)
                {
                    for (j = 0 ; j < k ; j++)
                    {
                        c[i][j] = a[i][j] + b[i][j];
                    }
                }

                printf("Addition of matrix A and B is,\n");

                for (i = 0 ; i < r ; i++)
                {
                    for (j = 0 ; j < k ; j++)
                    {
                        printf("%d  ", c[i][j]);
                    }
                    printf("\n");
                }
            }
            else if (d == 2)
            {
                int r1, g, n, k1, a[10][10], b[10][10], c[10][10];

                printf("Enter the elements of matrix A.\n");
                printf("Enter the number of rows : ");
                scanf("%d", &r);
                printf("Enter the number of columns : ");
                scanf("%d", &k);

                for (i = 0 ; i < r ; i++)
                {
                    for (j = 0 ; j < k ; j++)
                    {
                        printf("Enter the number : ");
                        scanf("%d", &a[i][j]);
                    }
                }

                printf("Enter the elements of matrix B.\n");
                printf("Enter the number of rows : ");
                scanf("%d", &r1);
                printf("Enter the number of columns : ");
                scanf("%d",&k1);

                if (k != r1)
                    printf("Enter the rows and columns properly for matrix multiplication.\n");
                else
                {
                    for (i = 0 ; i < r1 ; i++)
                    {
                        for (j = 0 ; j < k1 ; j++)
                        {
                            printf("Enter the number : ");
                            scanf("%d",&b[i][j]);
                        }
                    }
                    for (i = 0 ; i < r ; i++)
                    {
                        for ( j = 0 ; j < k1 ; j++)
                        {
                            g = 0;
                            for(n = 0 ; n < k ; n++)
                            {
                                g = g + a[i][n] * b[n][j];
                            }
                            c[i][j] = g;
                            g = 0;
                        }
                    }

                    printf("Multiplication of matrix A and B is,\n");

                    for (i = 0 ; i < r ; i++)
                    {
                        for (j = 0 ; j < k ; j++)
                        {
                            printf("%d ", c[i][j]);
                        }
                        printf("\n");
                    }
                }
            }
            else
            {
                printf("\nThank you.");
                e = 0;
            }
        }

        return 0;
    }