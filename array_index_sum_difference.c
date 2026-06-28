#include<stdio.h>
int main(){

    int arr[]={1,3,5,7,11};
    int sum_of_odds = 0;
    int sum_of_evens = 0;
    
    for(int i=0; i<5; i++){
        if(i%2!=0){
            sum_of_odds = arr[i] + sum_of_odds;
        }
        
        else{
            sum_of_evens = arr[i] + sum_of_evens;
        }
    }
        int difference = sum_of_evens - sum_of_odds;
        printf("the diffrence is : %d",difference);

    return 0;
}