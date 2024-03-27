#include<stdio.h>
struct comp_no
{
    float r,i;
};
float add_real( struct comp_no ,struct comp_no );
float add_imag(struct comp_no ,struct comp_no);
float sub_real(struct comp_no ,struct comp_no );
float sub_imag(struct comp_no ,struct comp_no );
int main()
{
 struct comp_no x, y;
x.r=2;
 x.i=5;
 y.r=2;
 y.i=2;

float realsub=sub_real(x,y);
float imagsub=sub_imag(x,y);

 
 float realadd=add_real(x,y);
 float imagadd=add_imag(x,y);
 printf("result= %f+i%f",realadd,imagadd);
 printf("result= %f-i%f",realsub,imagsub);

}
float add_real(struct comp_no x,struct comp_no y)
{ 
    
           
    return x.r+y.r;
}
float add_imag(struct comp_no x,struct comp_no y)
{
    return (x.i+y.i);
}
float sub_real(struct comp_no x,struct comp_no y)
{
     return (x.i-y.i);
}
float sub_imag(struct comp_no x,struct comp_no y)
{
     return (x.i-y.i);
}