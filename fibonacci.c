#include<stdio.h>
int fibonacci(int);

int main(){
    int n = 10;
    printf("fibonacci series :\n");
    for(int i = 0 ; i < n ; i++){
        printf("%d ",fibonacci(i));
    }
}

int fibonacci(int n){
    if(n <= 1){
        return n;
    }
    else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}