#include<stdio.h>
int main(){
    int a = 20 , b = 30 ;
    b =  a + b;
    a = b - a;
    b = b - a;
    printf("a = %d\nb = %d",a,b);  
}