#include<stdio.h>
int main(){

     int arr[2][2]={{1,2},{12,22}};
     int sum =0;
     for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            sum = sum + arr[i][j];
        }
        printf("\n");
     }

     printf("sum of array is %d", sum);
    return 0;
}