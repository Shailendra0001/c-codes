#include<stdio.h>
int main(){

    int x;
    printf("enter x :");
    scanf("%d", &x);

    int arr[]={1,2,3,4,5,6,7,8};
    int count = 0;
  
    for (int i=0; i<8; i++){
     
        for(int j=i+1; j<8; j++){
            if(arr[i] + arr[j] == x){
                count ++;
            }

        }
   

        }

        printf("total pairs equal to x in array is : %d", count);

    return 0;
}