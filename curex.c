#include<stdio.h>
int main(){
    int silver, gold;
    silver = 5;
    gold = 1;
    int r_gold = 0;
    int r_silver = 5;
    int given_gold = 3;
    int given_silver = 2;

    if(given_gold > r_gold){
        given_gold = given_gold - (2*gold);
        given_silver = given_silver - (2*gold);
        if(gold == 1)
        {
            gold--;
            printf("reqered gold %d\n",gold);
            given_silver = silver;
            printf("requerd silver %d",given_silver);

        }
    } 
}