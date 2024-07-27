#include <stdio.h>

void main()
{
    int i,j;
    int a[4][4] = {{0, 0, 0, 0},
                   {0, 0, 0, 0},
                   {0, 0, 0, 0},
                   {0, 0, 0, 0}};
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