#include <stdio.h>

int main() {
    int arr[100];
    int n;
    int evenSum = 0, oddSum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++) {
        if(i % 2 == 0) {
            evenSum += arr[i];
        } else {
            oddSum += arr[i];
        }
    }

    printf("\nSum of elements at even indices = %d\n", evenSum);
    printf("Sum of elements at odd indices = %d\n", oddSum);
    printf("Difference = %d\n", evenSum - oddSum);

    return 0;
}