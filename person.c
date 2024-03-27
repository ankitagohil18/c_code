#include<stdio.h>
struct person
{
    char name[30];
    int age;
    int wieght;
    int height;
};
int main()
{
    struct person mina;
     mina.age=25;
     mina.wieght=50;
     mina.height=150;
    
     printf(" %d %p\n",sizeof(mina),&mina);
     printf(" %d %p\n",sizeof(mina.age),&mina.age);
     printf(" %d %p\n",sizeof(mina.wieght),&mina.wieght);
     printf(" %d %p\n",sizeof(mina.height),&mina.height);



    
    

}
