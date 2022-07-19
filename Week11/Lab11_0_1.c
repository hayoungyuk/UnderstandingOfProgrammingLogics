#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int square(void){
    int x = 5;
    return x*x;    
}

int main(void){
    printf("the square is %d.\n", square());
}