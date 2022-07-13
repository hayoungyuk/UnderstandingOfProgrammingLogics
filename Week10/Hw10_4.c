#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printSumMToN(int a, int b){
    int sum = 0;

    for(int i = a; i <= b; i++){
        sum += i;
    }
    printf("%d to %d sum : %d\n", a , b, sum);
}

int main(void){
    int n1, n2;

    printf("Enter two numbers : ");
    scanf("%d %d", &n1, &n2);
    
    printSumMToN(n1, n2);
}