#include <stdio.h> 
int main(void) { 
    char ch; 
    int i, j, k; 
    double x, y, z; 

    ch = 'A' + 1;
    printf("ch ascii : %d after changing character : %c\n", ch, ch); 
    ch = 'A' + 32; 
    printf("ch ascii : %d after changing character : %c\n\n", ch, ch); 

    i = 9.99; 
    printf("after type casting : i = %d\n", i); 

    x = 10; 
    printf("after type casting : x = %f\n", x); 

    x = 10 + 9.99; 
    printf("after type casting : x = %f\n\n", x); 

    j = 10; k = 4; 
    y = 10.0; z = 4.0; 

    printf("after type casting\n"); 
    x = (double) j / k; 
    printf("1: x = %f\n", x); 
    x = (double) (j / k); 
    printf("2: x = %f\n\n", x); 

    x = (int) y / z; 
    printf("3: x = %f\n", x); 
    x = (int) (y / z); 
    printf("4: x = %f\n\n", x); 

    x = j / k * k; 
    printf("5: x = %f\n", x); 
    x = (double) j / k * k; 
    printf("6: x = %f\n", x); 
    x = (double) (j / k) * k; 
    printf("7: x = %f\n", x); 
    x = j / (double) k * k; 
    printf("8: x = %f\n", x); 
    x = j / k * (double) k; 
    printf("9: x = %f\n", x); 
} 