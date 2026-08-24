#include<stdio.h>
 
int main(){
    
    int cost1, quantity1, cost2, quantity2;
    printf("enter cost and quantity of first item : ");
    scanf("%d%d",&cost1,&quantity1);
    printf("enter cost and quantity of scnd item : ");
    scanf("%d%d",&cost2,&quantity2);

    float bill;
    bill = cost1*quantity1 + cost2*quantity2;
    float discount ;
    discount = bill - (bill*(.05));
    printf("final price after 5 percent discount is %f",discount);
    return 0;
}