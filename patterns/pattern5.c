/*
****
***
**
*
*/
#include<stdio.h>
int main(){
    for(int i = 1; i <= 4 ;i++)
    {
        for(int j = 5-i; j > 0 ; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}