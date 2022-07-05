#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int num = 7;
    int square = num*num;
    int cube = num*num*num;
    
    printf("The square number of %d is %d\n", num, square);
    printf("THe cube number of %d is %d\n", num, cube);
}