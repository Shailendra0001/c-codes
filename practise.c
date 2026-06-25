#include<stdio.h>
void swap(int *a, int *b);

int main(){
    int x= 12, y=15;
    swap(&x,&y);
    printf("x = %d & y = %d",x,y);
    return 0;
}

void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
    printf("*a = %d & *b = %d\n",*a ,*b );
}
