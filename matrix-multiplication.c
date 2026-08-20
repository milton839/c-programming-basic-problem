#include <stdio.h>
int main()
{
    int row, col, row2, col2;
    // input for 1st matrix
    printf("Please enter 1st matrix row & column number:");
    scanf("%d %d", &row, &col);

    // input for 2nd matrix
    printf("Please enter 2nd matrix row & column number:");
    scanf("%d %d", &row2, &col2);
    int a[row][col], b[row2][col2], result[row][col2];

    // Matrix Multiplication
    if (col == row2)
    {
        printf("Please enter 1st matrix element:");
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }

        printf("Please enter 2nd matrix element:");
        for (int i = 0; i < row2; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }

        printf("1st matrix:\n");
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }

        printf("\n2nd matrix:\n");
        for (int i = 0; i < row2; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                printf("%d ", b[i][j]);
            }
            printf("\n");
        }

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                int sum = 0;
                for (int k = 0; k < row2; k++)
                {
                    sum = sum + a[i][k] * b[k][j]; // ekhane i & j hosse 1st matrix e fix value rakhar jonno r k hosse bivinno position e jawar jonno
                }
                result[i][j] = sum;
                sum = 0;
            }
        }

        printf("Matrix Multiplication Result:\n");
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                printf("%d ", result[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Multiplication not possible because col != row2");
    }

    printf("\n");

    return 0;
}