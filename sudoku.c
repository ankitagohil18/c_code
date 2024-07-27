#include <stdio.h>

void main()
{
    int i,j;
    int a[4][4] = {{2, 0, 0, 0},
                   {0, 1, 0, 2},
                   {0, 0, 3, 0},
                   {0, 0, 0, 4}};
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}