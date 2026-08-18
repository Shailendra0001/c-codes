#include<stdio.h>
int main(){

    int arr [3][4] = {{0,1,0,0},{1,1,1,0},{1,1,1,1}};
    int maxcount = 0;
    int row = 0;
    
    for(int i=0; i<3; i++){
        int count = 0;
        for(int j=0; j<4; j++){
            if(arr[i][j]==1) count++;
        }
        if(maxcount < count){
            maxcount = count;
            row = i;
        }
    }

    printf("the maximum no. of one in row %d is %d", row, maxcount);
    return 0;

}