#include<stdio.h>
int sum(int n);

int main(){
    printf("sum is: %d", sum(10));  // sum upto first 10 number.
    return 0;
}

int sum(int n){
    if(n==0){     // base case.
        return 0;
    }
    int sum_n_minus_one = sum(n-1);
    int sum_n = sum_n_minus_one + n;
    return sum_n;

}
