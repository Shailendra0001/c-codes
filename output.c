#include<stdio.h>
int main(){
    int a=0, b=0, x;
    x=0 || (a=++b);
    printf("%d%d%d",a,b,x);
     
    return 0;
}