#include<stdio.h>
#include<limits.h>

int main(){

    int max_value = INT_MIN;
    int arr[2][2] = {1,5,6,9};

    for(int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            if(max_value < arr[i][j]){
                max_value = arr[i][j];
            }
        }
    }
    printf("THE MAXIMUM VALUE ELEMENT IN ARRAY IS : %d",max_value);
    
    return 0;
}