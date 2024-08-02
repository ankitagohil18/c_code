#include <stdio.h>
#include <stdlib.h>

struct sudoku
{
    int *base_address;
    int size;
};

void set_data(struct sudoku *p, int r, int c, int data);  // x[r][c] = data;
int get_data(struct sudoku *p, int r, int c);             // x[r][c]

void init(struct sudoku *p, int size);
void Display(struct sudoku *p);
int Row_check(struct sudoku *p, int r);
int Col_check(struct sudoku *p, int c);
int Box_check(struct sudoku *p, int r, int c);

void initialize(int row, int col, int x[row][col]);
void display(int row, int col, int x[row][col]);
void setData(int row, int col, int x[row][col], int r, int c, int data);
int row_check(int row, int col, int x[row][col], int r);
int col_check(int row, int col, int x[row][col], int c);
int box_check(int row, int col, int x[row][col], int r, int c);

int main()
{
    struct sudoku s;
    init(&s, 4);
    set_data(&s, 0, 0, 2);
    set_data(&s, 1, 1, 1);
    set_data(&s, 1, 3, 2);
    set_data(&s, 2, 2, 3);
    set_data(&s, 2, 3, 3);
    set_data(&s, 3, 3, 4);
    Display(&s);
    printf("function nu output: %d\n", Box_check(&s, 0, 0));
    printf("function nu output: %d\n", Box_check(&s, 2, 0));
    printf("function nu output: %d\n", Box_check(&s, 1, 2));
    printf("function nu output: %d\n", Box_check(&s, 3, 3));
    // int a[4][4];
    // initialize(4, 4, a);
    // setData(4, 4, a, 0, 0, 2);
    // setData(4, 4, a, 1, 1, 1);
    // setData(4, 4, a, 1, 3, 2);
    // setData(4, 4, a, 2, 2, 3);
    // setData(4, 4, a, 3, 3, 4);
    // display(4, 4, a);
    // printf("function nu output: %d\n", row_check(4, 4, a, 0));
    // printf("function nu output: %d\n", row_check(4, 4, a, 1));
    // printf("function nu output: %d\n", row_check(4, 4, a, 2));
    // printf("function nu output: %d\n", row_check(4, 4, a, 3));
    return 0;
}

void init(struct sudoku *p, int size)
{
    int i,j;
    (*p).size = size;
    (*p).base_address = (int *)malloc((*p).size * (*p).size * sizeof(int));
    for (i = 0; i < (*p).size; i++)
    {
        for (j = 0; j < (*p).size; j++)
        {
            set_data(p, i, j, 0);
        }
    }
}
void set_data(struct sudoku *p, int r, int c, int data)
{
    *((*p).base_address + r * (*p).size + c) = data;
}
void Display(struct sudoku *p)
{
    int i,j;
    for (i = 0; i < (*p).size; i++)
    {
        for (j = 0; j < (*p).size; j++)
        {
            printf("%d ", get_data(p, i, j));
        }
        printf("\n");
    }
}
int get_data(struct sudoku *p, int r, int c)
{
    return *((*p).base_address + r * (*p).size + c);
}
int Row_check(struct sudoku *p, int r)
{
    int count[(*p).size + 1], i;
    for (i = 0; i < (*p).size + 1; i++)
    {
        count[i] = 0;
    }
    for (i = 0; i < (*p).size; i++)
    {
        count[get_data(p, r, i)]++;
    }
    for (i = 1; i <= (*p).size; i++)
    {
        if (count[i] >= 2)
        {
            return 0;
        }
    }
    return 1;
}
int Col_check(struct sudoku *p, int c)
{
    int count[(*p).size + 1], i;
    for (i = 0; i < (*p).size + 1; i++)
    {
        count[i] = 0;
    }
    for (i = 0; i < (*p).size; i++)
    {
        count[get_data(p, i, c)]++;
    }
    for (i = 1; i <= (*p).size; i++)
    {
        if (count[i] >= 2)
        {
            return 0;
        }
    }
    return 1;
}
int Box_check(struct sudoku *p, int r, int c)
{
    int count[(*p).size + 1], i;
    for (i = 0; i < (*p).size + 1; i++)
    {
        count[i] = 0;
    }
    /* Do code change here */
    for (i = 1; i <= (*p).size; i++)
    {
        if (count[i] >= 2)
        {
            return 0;
        }
    }
    return 1;
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
void setData(int row, int col, int x[row][col], int r, int c, int data)
{
    x[r][c] = data;
}
int row_check(int row, int col, int x[row][col], int r)
{
    int count[row + 1], i;
    for (i = 0; i < row + 1; i++)
    {
        count[i] = 0;
    }
    for (i = 0; i < row; i++)
    {
        count[x[r][i]]++;
    }
    for (i = 1; i <= row; i++)
    {
        if (count[i] >= 2)
        {
            return 0;
        }
    }
    return 1;
}
