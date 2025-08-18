#include<stdio.h>
#include<math.h>
int primenum(int);

int main(){
    for(int i=2 ; i<=100;i++){
        if(primenum(i)== 1){
            printf("%d\n",i);
        }
    }
}

int primenum(int num){
    if(num<=1) return 0;
    if(num == 2) return 1;
    for(int i = 2;i<=sqrt(num);i++){
        if(num%i == 0){
            return 0;
        }
    }
    return 1;
}