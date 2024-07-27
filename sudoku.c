#include <stdio.h>
void initialize(int row, int col, int x[row][col]);
void display(int row, int col, int x[row][col]);

void main()
{
    int a[4][4];
    initialize(4, 4, a);
    a[0][0] = 2;
    a[1][1] = 1;
    a[1][3] = 2;
    a[2][2] = 3;
    a[3][3] = 4;
    display(4, 4, a);
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
void display(int row, int col, int x[row][col])
{
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d ", x[i][j]);
        }
        printf("\n");
    }    
}