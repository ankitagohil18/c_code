#include<stdio.h>
int main(){
    int arr[] = {1,4,3,6,7,5,-1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i,j,temp;
    for( i = 1; i < n; i++){
        temp = arr[i];
        j = i-1;
        while( j >= 0 && arr[j]>temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    } 

    printf("insertion sort :\n");
    for(i = 0; i < n;i++){
        printf("%d ",arr[i]);
    }
}