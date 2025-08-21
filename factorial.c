#include<stdio.h>
int factorial(int);

int main(){

    printf("%d",factorial(3));

}

int factorial(int n){
    if(n == 0){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}

