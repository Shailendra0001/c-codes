#include<stdio.h>
#include<stdbool.h>

int main() {

    int arr[] = {1,2,3,4,1,2,3};
    int n = 7;

    for(int i = 0; i < n; i++) {

        bool flag = false;

        for(int j = 0; j < n; j++) {

            if(i != j && arr[i] == arr[j]) {
                flag = true;
                break;
            }
        }

        if(flag == false) {
            printf("Unique element is %d", arr[i]);
            break;
        }
    }

    return 0;
}