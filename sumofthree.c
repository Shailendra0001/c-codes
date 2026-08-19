#include <stdio.h>
int main(){
    int a, b, sum;
    printf("enter a : ");
    scanf("%d", &a);
    printf("enter b : ");
    scanf("%d", &b);
    int c;
    printf("enter c :");
    scanf("%d",&c);
    sum = a + b + c;
    printf("sum of a , b and c is: %d",sum);
    return 0;
}