#include<stdio.h>

int main(){

    int arr[]={2,-2,8,-9};
    
    int minimum = arr[0];

    for(int i=0; i<4; i++){
        if(minimum>arr[i]){
            minimum=arr[i];
        }
    }
    printf("the minimum number is : %d",minimum);
    
    return 0;
}