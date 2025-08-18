#include<stdio.h>
int main(){
    int arr[] = {1,2,3,3,3,5};
    int val = 3;
    int n = sizeof(arr)/sizeof(arr[0]);
    int j , i ,temp , count =0;

    for ( i = 0 ; i < n ; i++){
        if(arr[i] == val){
            arr[i] = -1;
        }
        printf("%d ",arr[i]);
    }
    printf("\n");
    for( i=0 ; i < n ; i++){
        for( j = 0 ; j < n-i-1  ; j++){
            if(arr[j] < arr[j+1]){
                temp  = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }   
        }
        // printf("%d ",arr[j]);
    }

    for(i=0;i<n;i++){
        while(arr[i]!= -1){
            count++;
            break;
        }
        printf("%d ",arr[i]);
    }
    printf("\n%d",count);

    return count;
}