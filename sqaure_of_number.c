#include<stdio.h>
#include<math.h>

int main(){
    int n, power;

    printf("enter number: ");
    scanf("%d", &n);

    power = pow (n, 2);
    printf("square of number is: %0.1f", power);

    return 0;
}