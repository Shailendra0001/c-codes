#include<stdio.h>
int main(){

    int arr[3][2] = {{1,2},{3,4},{5,6}};
    int brr [2][3];
    
    printf("\n");

    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            brr[i][j]=arr[j][i];
        }
        printf("\n");
    }

    for (int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            printf("%d", brr[i][j]);
        }
        printf
    }
    return 0;
}