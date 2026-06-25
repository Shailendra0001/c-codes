#include<stdio.h>
int main(){
float price[3];

    printf("enter price1: ");
    scanf("%f", &price[0]);

    printf("enter price2: ");
    scanf("%f", &price[1]);
    
    printf("enter price3: ");
    scanf("%f", &price[2]);

printf("total price: %f", (price[0] + (price[0]*0.18)));
printf("total price: %f", (price[1] + (price[1]*0.18)));
printf("total price: %f", (price[2] + (price[2]*0.18)));



    return 0;
}