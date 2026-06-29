#include <stdio.h>
int main(){

    int n;
    printf("Enter sixe of array : ");
    scanf("%d", &n);

    int arr[n];
    printf("enter elements : \n", n);

    for (int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    int count = 0;
    
        int x;
        printf("Enter number : ");
        scanf("%d", &x);

        for (int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                for(int k=j+1; k<n; k++){
                    if(arr[i]+arr[j]+arr[k]==x){
                        count ++;
                    }
                }
            }
        }


        printf("the triplets equal to x in array are : %d", count);


    return 0;
}