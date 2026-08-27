#include<stdio.h>
int main(){

    int cost, quantity, bill ;
    printf("enter cost : ");
    scanf("%d",&cost);
    printf("enter quantity : ");
    scanf("%d",&quantity);

    bill= cost*quantity;
    float final_bill = bill - (bill*0.10);
    printf("final bill after discount is %f",final_bill);
    return 0;
}