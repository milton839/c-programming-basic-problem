#include <stdio.h>
int main()
{
    int row, col;
    printf("Please enter row & column number:");
    scanf("%d %d", &row, &col);
    int a[row][col];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    //Specific row print
    printf("Specific row print:");
    int sRow;
    scanf("%d", &sRow);

    for (int i = 0; i < col; i++)
    {
        printf("%d ", a[sRow][i]);
    }

     //Specific column print
    printf("\nSpecific col print:");
    int sCol;
    scanf("%d", &sCol);

    for (int i = 0; i < row; i++)
    {
        printf("%d ", a[i][sCol]);
    }
    
    return 0;
}