#include<stdio.h>
#include<math.h>
struct point
{
    int x ,y;
};

float distence(struct point,struct point );
float distence( struct point p, struct point q )
{  
     return sqrt((pow((p.x-q.x),2)+pow((p.y-q.y),2)));  
}


int main()
{  struct point p,q; 
    p.x=4;
    p.y=4;
    q.x=2;
    q.y=2;
    float d; 
    d =distence(p,q);
    printf("%f",d);

}


