#include<stdio.h>
int main(){

    int cost, quantity, bill, final_bill;
    printf("enter cost :");
    scanf("%d",&cost);

    printf("enter quantity : ");
    scanf("%d",&quantity);

    bill = cost*quantity;
    final_bill= bill - (bill*0.10);
    printf("final bill is %d",final_bill);
    return 0;
}