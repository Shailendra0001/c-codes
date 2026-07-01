#include<stdio.h>
int sum(int arr[], int n);
int wholesum(int n);

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,11,12,13,14,15,16,17,18,19,20};
   int sum_of_array = sum(arr,19);
    int sum_of_numbers = wholesum(20);
    
    int difference = sum_of_numbers-sum_of_array;
    printf("the missing number is : %d", difference);
    return 0;
} 

int sum(int arr[], int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
        return sum;
    }
    
    int wholesum(int n){
        return n*(n+1)/2;
    }