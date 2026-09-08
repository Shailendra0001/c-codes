#include<stdio.h>
 # include<math.h>
int main(){
    float a, b, c, s, ar;
    printf("enter 3 sides of triangle : ");
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    ar=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("area of triangle using herons formula is %f",ar);
    return 0;
}