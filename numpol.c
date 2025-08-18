#include<stdio.h>
#include <stdbool.h>


bool ispolindrom(int);

int main(){
    if(ispolindrom(121))
    {
        printf("polindrom");
    }
    else{
        printf("not polindrom");
    }
}

bool ispolindrom(int num){
    int result = 0, rem , temp ;
    temp = num;
    if(num<0) return false;
    while(temp!=0){
        rem = temp%10;
        result  = rem + 10*result;
        temp = temp/10;
    }
    if(result == num) return true; 
}

