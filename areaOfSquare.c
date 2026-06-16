#include<stdio.h>
int main(){
    int side, area;
    printf("enter side: ");
    scanf("%d",&side);
    area = side * side; 
    printf("the area of square is : %d",side,area);
    return 0;
}