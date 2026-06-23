#include<stdio.h>
float percentage(float science, float maths, float english);

int main(){
    printf("%f", percentage(90, 90, 90));
    return 0;
}

float percentage (float science, float maths, float english) {
        return (science+maths+english)/3.0;
}