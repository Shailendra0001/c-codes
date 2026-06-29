#include<stdio.h>
int main(){

    char arr[]={'m','a','d','a','m'};
    int n=5;
    int count = 1;

    for (int i=0; i<n/2; i++){
        if(arr[i]!=arr[n-i-1]){
            count =0;
            break;
        }

    }
    if(count) printf("palindrome");
    else printf("not a palindrome");
  
    return 0;
}