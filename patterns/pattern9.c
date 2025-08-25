/*
A
AB
ABC
ABCD
*/

#include<stdio.h>
int main(){
    int n = 4;
    int i , j, a;
    for( i = 1; i <= n ; i++){
        a = 1;
        for( j = 1 ; j <= i ; j++){
            int d = a + 64;
            char ch = (char)d;
            printf("%c ",ch);
            a++;
            
        }
        printf("\n");
    }  
}