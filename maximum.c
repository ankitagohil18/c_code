#include<stdio.h>
int main()

{
    int anks[11]={3,2,1,4,5,6,7,8,9,10,11};
    
    int n=sizeof(anks)/sizeof(anks[0]);
    int i;
    for(i=1;i<n;i++)
    { 
      printf("%d\n",anks[i]*2);
    }    
}