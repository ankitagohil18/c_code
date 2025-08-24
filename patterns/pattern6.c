/*
1
12
123
1234
1234
123
12
1
*/
#include<stdio.h>
int main(){
    for(int i = 1; i<=4;i++){
        for(int j = 1; j <= i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    int n = 4;
    int a = n;
    for(int i = 1; i <= n;i++){
        for(int j = 1; j<=a;j++){
            // j=n+1-1 or n=a ||j+i=n+1
            printf("%d",j);
        }
        a--;
        printf("\n");
    }
}