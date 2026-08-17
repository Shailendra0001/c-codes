#include<stdio.h>

int main(){

    int arr [3][4] = {{1,2,3,5},{5,4,6,7},{8,7,9,4}};
    int sum = 0;

    for(int i=1; i<=2; i++){
        for (int j=0; j<=3; j++){
            sum = sum + arr[i][j];
        }
    }

    printf("sum of elemnts time r1l2 is = %d", sum);

    return 0;
}