#include<stdio.h>

int main(){

    int arr[]={1,2,3,4,5};
    int product = 1;

    for (int i=0; i<5; i++){
        product = product*arr[i];
    }
    
    printf("product of array is : %dd", product);

    return 0;
}