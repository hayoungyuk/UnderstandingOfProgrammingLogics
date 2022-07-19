#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum1ToN(int n){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += i;
    }
    return sum;
}

int main(void){
    printf("1 to 5 sum is %d\n", sum1ToN(5));
    printf("1 to 7 sum is %d\n", sum1ToN(7));
    printf("1 to 10 sum is %d\n", sum1ToN(10));
}