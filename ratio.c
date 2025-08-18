#include <stdio.h>
int main(){
    int n=6,i;
    // printf("No of E:");
    // scanf("%d",&n);
    int arr[6]={1,2,3,-1,-2,0};
    // for(i = 0 ; i< n ; i++)
    // {
        // scanf("%d",&arr[i]);
    // }

    int count_pos = 0,count_negative = 0,count_zero = 0;
    
    for (int i = 0 ; i<n ; i++)
    {
        printf("%d\n",arr[i]);
        if(arr[i]>0){
            count_pos = count_pos + 1;
                    
        }
        else if(arr[i]<0){
            count_negative = count_negative + 1;   
        }
        else {
            count_zero = count_zero +1 ;
        }    
    }
    
    float r1 = (float)count_pos/(float)n;
    float r2 = count_negative/(float)n;
    float r3 = (float)count_zero/n;
    printf("%f\n",r1);
    printf("%f\n",r2);
    printf("%f\n",r3);
}