 #include <stdio.h>

// Left rotate karne ka function
void leftRotate(int arr[], int n, int k) {
    int temp[100];
    int j = 0;
    k = k % n;
    
    // k se lekar end tak ke elements temp ke starting mein
    for (int i = k; i < n; i++) {
        temp[j] = arr[i];
        j++;
    }
    
    // Pehle ke k elements temp mein aage
    for (int i = 0; i < k; i++) {
        temp[j] = arr[i];
        j++;
    }
    
    // Wapas original array mein copy
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

// Array print karne ka function
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int k = 2;
    
    printf("Original array: ");
    printArray(arr, n);
    
    leftRotate(arr, n, k);
    
    printf("Left rotated by %d: ", k);
    printArray(arr, n);
    
    return 0;
}