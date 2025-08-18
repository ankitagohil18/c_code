#include<stdio.h>
#include<math.h>

int armstrongnum(int);
int digitcount(int);


void main(){
    int i;
    for( i = 0 ; i<=500; i++){
        if(armstrongnum(i)){
            printf("%d\n",i);
        
        }
    }
} 

int armstrongnum(int num){
    int count  , rem , sum = 0 , original = num ;

    count = digitcount(num);
    while(num!=0){
        rem = num%10;
        sum = sum +(int)(pow(rem,count)+0.5);
        num = num/10; 
    }
    return(sum == original);
}

int digitcount(int num){
    int count=0;
    while(num!=0){
        num = num/10;
        count++;   
    }
    return count;
}
