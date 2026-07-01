#include<stdio.h>

void search(int arr[], int n , int x);

int main(){
    int n; 
    printf("enter size of array : \n");
    scanf("%d", &n);

    int arr[100];

    printf("enter elements of array : \n");
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("array: ");
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");

    int x; 
    printf("find the number in array: \n");
    scanf("%d", &x);

    search(arr, n, x);

    return 0;
}

void search(int arr[], int n, int x){
    int found = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] == x){
            printf("Element found at index %d\n", i);
            found = 1;
            break;
        }
    }

    if(found == 0){
        printf("Element not found in array\n");
    }
}