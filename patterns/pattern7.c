/*
1
13
135
1357  || a(n) = 2*n-1 for odd number
1357
135
13
1
*/
#include<stdio.h>
int main(){
    int n = 4;
    int a = n;
    for(int i = 1; i <= n  ; i++){
        for(int j = 1 ; j <= 2*i-1; j++){
            if(j%2!=0)
                printf("%d",j);   
        }
        printf("\n");
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= 2*a-1; j++){
            if(j%2!=0)
                printf("%d",j);
        }
        a--;
        printf("\n");
    }
}