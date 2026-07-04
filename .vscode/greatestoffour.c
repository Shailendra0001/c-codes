#include <stdio.h>

// Function to find greatest
int findGreatest(int arr[], int size) {
    int max = arr[0];  // Assume first element is maximum
    
    for(int i = 1; i < size; i++) {
        if(arr[i] > max) {
            max = arr[i];  // Update max if found greater
        }
    }
    
    return max;
}

int main() {
    int arr[4];
    
    printf("Enter 4 numbers:\n");
    for(int i = 0; i < 4; i++) {
        printf("Number %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    
    int greatest = findGreatest(arr, 4);
    
    printf("\nEntered numbers: ");
    for(int i = 0; i < 4; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\nGreatest number = %d\n", greatest);
    
    return 0;
}