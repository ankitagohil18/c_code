#include <stdio.h>
void initialize(int row, int col, int x[row][col]);

void main()
{
    int i,j;
    int a[4][4];
    initialize(4, 4, a);
    a[0][0] = 2;
    a[1][1] = 1;
    a[1][3] = 2;
    a[2][2] = 3;
    a[3][3] = 4;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

void initialize(int row, int col, int x[row][col])
{
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            x[i][j] = 0;
        }
    }
}