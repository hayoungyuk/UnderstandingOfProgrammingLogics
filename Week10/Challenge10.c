#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printFibo(int n){
    // 1    1   2   3   5
    // a1   a2  a3  a4  a5

    //-     a1  a2  a3  a4
    int a1 = 1, a2 = 1, a3;

    for(int i = 1; i < n; i++){
        a3 = a1 + a2; // 2 3 5 8 13
        a1 = a2; // 1 2 3 5 8
        a2 = a3; // 2 3 5 8 13
        /*
        c = a + b;
        a = b;
        b = c;
        */
    }
    printf("%d ", a1); // 1 2 3 5 8 13
}

int main(void){
    int num;

    printf("How many fibonacci you want to print? (Enter num bigger than 3): ");
    scanf("%d", &num); // 5

    for(int i = 1 ; i <= num;i++){
        printFibo(i); // 1 2 3 4 5 
    }
    printf("\n");
}