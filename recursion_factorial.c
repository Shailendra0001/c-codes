#include<stdio.h>
int factorial(int n);
int main(){
    printf("factorial is : %d", factorial(5));
    return 0;
}
int factorial(int n){
    if (n==1) return 1;
    return n* factorial(n-1);
    }
  
