#include<stdio.h>
int main(){
    int a = 2, b = 7, c = 8;
    if(a>b){
        if(a>c){
            printf("%d",a);
        }
        else{
            printf("%d",c);
        }
    }
    else if(b>c){
        if(b>a){
            printf("%d",b);
        }
        else{
            printf("%d",a);
        }
    }
    else{
        if(c>b){
            printf("%d",c);
        }
        else{
            printf("%d",b);
        }
    }
    
    
   if((a>b && a<c) || (a<b && a>c)){
        printf("%d",a);
   }
   else if((b>c && c<a)||(b<c && c>a)){
        printf("%d",b);
   }
   else{
        printf("%d",c);
   }

   if(a<b){
        if(a<c){
            printf("%d", a);
        }
    else{
        printf("%d", c);
        }
   }
   else if(b<c){
        if(b<a){
            printf("%d",b);
        }
        else{
            printf("%d",a);
        }
   }
   else{
        if(c<b){
            printf("%d",c);
        }
        else{
            printf("%d",b);
        }
   }

    return 0;
}