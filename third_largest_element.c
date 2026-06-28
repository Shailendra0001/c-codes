#include<stdio.h>
#include<limits.h>

int main(){
    int arr[]={4,6,87,3,34,90};
    
    int largest=INT_MIN;
    int secondLargest=INT_MIN;
    int thirdLargest = INT_MIN;

    for( int i=0; i<6; i++){
        if(largest<arr[i]){
            thirdLargest=secondLargest;
            secondLargest=largest;
            largest=arr[i];
        }
        
        else if(largest>arr[i] && secondLargest<arr[i]){
            thirdLargest=secondLargest;
            secondLargest=arr[i];
        }

        else if(largest>arr[i] && secondLargest>arr[i] && thirdLargest<arr[i]){
            thirdLargest=arr[i];
        }
    }

    printf("largest number is : %d\n",largest);
    printf("second largest number is : %d", secondLargest);
    printf("third largest number is : %d", thirdLargest);
    return 0;
}