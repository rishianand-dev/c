#include <stdio.h>

int main()
{
    int row, col;
    printf("Enter row and column of matrix: ");
    scanf("%d %d", &row, &col);
    int first_matrix[row][col], second_matrix[row][col];

    printf("----------- \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter %d %d element for 1st matrix: ", i,j);
            scanf("%d", &first_matrix[i][j]);
        }
    }
    printf("----------- \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter %d %d element for 2nd matrix: ", i,j);
            scanf("%d", &second_matrix[i][j]);
        }
    }
     printf("----------- \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
           printf("%d ", first_matrix[i][j] * second_matrix[i][j]); 
        }
        printf("\n");
    }
    return 0;

}