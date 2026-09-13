#include<stdio.h>
int main(){
    int bill;
    printf("enter 1 for paid and 0 for not paid : ");
    scanf("%d",&bill);
    if(bill == 1){ 
        printf("bill is paid");
    }else {
        printf("not paid");
    }
    return 0;
}