#include<stdio.h>
struct stack
{
    int arr[10];
    int stack_top ;
} ;
typedef struct stack st;
void push(st,int);
void pop(st);

int isempty(st s*){
    if(s.stack_top == -1)
        return 1;
    else
        return 0;    
}


int isfull(st s*){
    if(s.stack_top == arr[10]-1)
       return 1;
    else
       return 0;
}

void push(st s*,int data){
    if(isfull(s))
        printf("stack full");
    else
        s.stack_top++;
        s.arr[s.stack_top] = data;
}

void pop(st s*){
    if(isempty(s))
        printf("stack is empty");
    else 
        s.top--;
        printf("popped data is :",s.arr[s.stack_top]);
}

int main(){
    st s* = (s*)malloc(sizeof(s*));
    push(s,10);
    printf("element :",s.arr[stack_top]);
}
