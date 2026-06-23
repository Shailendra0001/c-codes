#include<stdio.h>
float celsius(float c);

int main(){
      printf("%f", celsius(0));
    return 0;
}

float celsius(float c){
    float f= (9.0/5.0)*c+32;
    return f;
}