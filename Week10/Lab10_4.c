#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printSum1toN(int a){
    int sum = 0;
    for(int i = 1; i <= a; i++)
        sum += i;
    printf("Sum 1 to %d : %d\n", a, sum);
}

int main(void){
    int num;

    printf("Enter a number : ");
    scanf("%d", &num);

    printSum1toN(num);
}