#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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
    if (Row_check(p, r) && Col_check(p, c) && Box_check(p, r, c))
    {
        *((*p).base_address + r * (*p).size + c) = data;
    }
    else
    {
        printf("Error :: cannot set %d at index (%d, %d)\n", data, r, c);
    }
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
    int count[(*p).size + 1], i, j, box_size = sqrt((*p).size);
    r = r - (r % box_size);
    c = c - (c % box_size);
    for (i = 0; i < (*p).size + 1; i++)
    {
        count[i] = 0;
    }
    for (i = 0; i < box_size; i++)
    {
        for (j = 0; j < box_size; j++)
        {
            count[get_data(p, r + i, c + j)]++;
        }
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
