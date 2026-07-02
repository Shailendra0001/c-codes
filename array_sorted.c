#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int sorted = 1;   // Assume array is sorted

    for(int i = 0; i < n - 1; i++) {
        if(arr[i] > arr[i + 1]) {
            sorted = 0;
            break;
        }
    }

    if(sorted) {
        printf("Array is sorted in ascending order.\n");
    } else {
        printf("Array is NOT sorted.\n");
    }

    return 0;
}