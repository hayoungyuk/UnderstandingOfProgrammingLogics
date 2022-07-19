#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int square2(int a){
    return a*a;
}

int main(void){
    int result;
    result = square2(5);
    printf("The square is %d\n", result);
}