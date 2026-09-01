#include<stdio.h>
int main(){

    int a, b, c;
    printf("enter sides : ");
    scanf("%d%d%d",&a,&b,&c);

    if(((a+b)>c) && ((b+c)>a) && ((a+c)>b)){
        printf("valid triangle");
    }else{
        printf("invalid triangle");
    }
    return 0;
}