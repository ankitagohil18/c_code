#include<stdio.h>
int main(){
    int arr[] = {2,8,7,3,6};
    int target = 9;
    int i,j;
    for (i=0;i<=5;i++)
        {
            for(j=i+1;j<5;j++)
            {
                if(arr[i]+arr[j]==target)
                {
                    printf(" %d %d\n",i,j);
                }
            }
        }   


}