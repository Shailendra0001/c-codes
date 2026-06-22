#include<stdio.h>

float area_of_square(float side);
float area_of_rectangle(float length, float breadth);
float area_of_circle(float radius);

int main() {
    float side, length, breadth, radius;

    printf("Enter side of square: ");
    scanf("%f", &side);

    printf("Area of square = %.2f\n", area_of_square(side));

    printf("\nEnter length and breadth of rectangle: ");
    scanf("%f %f", &length, &breadth);

    printf("Area of rectangle = %.2f\n", area_of_rectangle(length, breadth));

    printf("\nEnter radius of circle: ");
    scanf("%f", &radius);

    printf("Area of circle = %.2f\n", area_of_circle(radius));

    return 0;
}

float area_of_square(float side) {
    return side * side;
}

float area_of_rectangle(float length, float breadth) {
    return length * breadth;
}

float area_of_circle(float radius) {
    return 3.14 * radius * radius;
}