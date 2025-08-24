#include<stdio.h>
int main(){
    int arr[10]={1,2,-1,3,4,6,7,9,8,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int temp;
    int i,j;
    for(i = 0; i < n; i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("bubble sort\n");
    for(i =0 ; i < n ; i++){
        printf("%d ",arr[i]);
    }
}