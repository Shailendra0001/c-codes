#include<stdio.h>
int main(){
    int base, height;
    printf("enter height and base :");
    scanf("%d%d",&height,&base);
    printf("area of triangle is %f",(1/2.0)*base*height);
    return 0;
}