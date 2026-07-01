#include<stdio.h>

int main(){

    int arr[] = {1,2,3,2,4,5};

    for(int i=0; i<6; i++){
        for(int j=i+1; j<6; j++){
            if(arr[j]==arr[i]){
                printf("Duplicate value %d found at indices (%d,%d)\n", arr[i], i, j);
                break;
            }
        }
    }
    return 0;
}