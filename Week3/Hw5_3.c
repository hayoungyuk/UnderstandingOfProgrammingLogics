#define _CRT_SECURE_NO_WARNINGS
#define CONVERSION_FACTOR (double)(9.0/5.0)
#include <stdio.h>

int main(void){
    const int BASE = 32;
    double celsius, fahrenheit;
    
    printf("Enter a celsius temperature : ");
    scanf("%lf", &celsius);

    fahrenheit = celsius * CONVERSION_FACTOR + BASE;
    printf("Fahrenheit Equivalent : %f\n", fahrenheit);
}