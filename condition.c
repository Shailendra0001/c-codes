#include<stdio.h>
int main(){

    int n, r;
    printf("enter number : ");
    scanf("%d",&n);

    if(n>5){
        printf("hello\n");
    }
    r = n* n;
    printf("%d",r);
    return 0;
}