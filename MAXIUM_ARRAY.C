#include<stdio.h>
#include<limits.h>

int main(){

    int arr[]={-1,-2,-5,-8};
    
    int max =INT_MIN;
    for(int i=0;i<4; i++){
        if(max < arr[i]){
        max = arr[i];
        }
        
        
    }
    printf("greatest number in array is : %d",max);
    return 0;
}