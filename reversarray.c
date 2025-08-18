#include<stdio.h>
int main(){
    int arr[] = {3,2,3,4,5};
    int i,j,target = 6;
    int n= sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<n/2;i++){
        if((arr[i]+arr[n-i-1]) == target){
            printf("%d %d ",i,i+1);
        }

        // for(j = i+1;j<5;j++){
        //     if(arr[i]+arr[j]==target){
        //         printf("%d %d \n",i,j);
        //     }
        // }
         
    }
}