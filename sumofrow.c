#include <stdio.h>
#include <limits.h>

int main(){

    int arr [3][3] = {{2,5,8},{3,2,8},{2,7,7}};
    int max_sum_of_row = INT_MIN;
    int index = 0;
    
    for (int i=0; i<3; i++){
        int sum = 0;
        for (int j=0; j<3; j++){
           sum = sum + arr[i][j];
        }
        if(max_sum_of_row < sum){
            max_sum_of_row = sum;
            index = i;
        }
    }
    printf("the greatest sum of index %d is %d",index,max_sum_of_row);
    return 0;
}