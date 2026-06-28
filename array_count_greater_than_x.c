#include<stdio.h>
int main(){

    int arr[]={12,45,23,13,67,89};
     int count = 0;

     int x;
     printf("Enter number : ");
     scanf("%d", &x);

     for (int i=0; i<6; i++){
        if(arr[i]>x){
            count ++;
        }
     }
      
     printf("there are %d numbers greater than %d in array",count, x);


    return 0;
}