#include<stdio.h>
int main(){
    char str[]="Ankita";
    int i=0 ;
    while(str[i]!='\0'){
        printf(" %c -> %d",str[i],str[i]);
        i++;
    }
}