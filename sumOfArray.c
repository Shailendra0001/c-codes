#include<stdio.h>

int main(){

    int r;
    printf("enter no. of rows : ");
    scanf("%d", &r);

    int c;
    printf("enter no. of rows : ");
    scanf("%d", &c);

    int arr[r][c];
    int sum = 0;

    for(int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            printf("%d", arr[i][j]);
        }
    }     

    
    for(int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            sum = sum + arr[i][j];
    }
    printf("\n");
}
printf("the sum of array is : %d",sum);

       return 0;
    }