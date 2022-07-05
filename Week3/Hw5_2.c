#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    const double PI = 3.141592;
    int r;
    double area;
    double circum;

    printf("Enter a radius: ");
    scanf("%d", &r);

    area = PI * r * r;
    printf("The area of a circle with %d : %f\n", r, area);

    circum = 2 * PI * r;
    printf("The circumference of a circle with %d : %f\n", r, circum);
}