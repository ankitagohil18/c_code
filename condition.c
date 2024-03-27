#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three number :  \n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
    { 
     
        if(b>c)
           printf("%d %d %d",a,b,c);
        
    }  
    else if (b>a && b>c)
    {
     
         if(a>c)
           printf("%d  %d %d",b,a,c);
     
    }    
    else 
    {
     
         if(a>b)
           printf("%d %d %d",c,a,b);
          
     
    }
    
}