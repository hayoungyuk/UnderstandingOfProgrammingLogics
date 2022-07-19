#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sumMToN(int a, int b){
    int sum = 0;
    for(int i=a; i<=b;i++){
        sum += i;
    }
    return sum;
}

int main(void){
    printf("%d to %d sum == %d\n", 2, 5, sumMToN(2, 5));
    printf("%d to %d sum == %d\n", 3, 7, sumMToN(3, 7));
    printf("%d to %d sum == %d\n", 2, 10, sumMToN(2, 10));
}