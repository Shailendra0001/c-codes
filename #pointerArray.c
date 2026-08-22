#include<stdio.h>

int main(){
    int arr[]={10,25,7,40,15};
    int n= 5;
    int *p = arr;
    int sum = 0;
    int max = *p;

    for(int i=0; i<n; i++){
        sum = sum +*(p+i);
        if(*(p+i)>max){
            max=*(p+i);
        }
    }
    printf("sum = %d\n",sum);
    printf("maximum = %d\n",max);

    return 0;
}