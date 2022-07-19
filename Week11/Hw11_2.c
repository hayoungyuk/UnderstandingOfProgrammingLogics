#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int power(int a, int b){
    int result = 1;
    for(int i = 0;i < b;i++){
        result *= a;
    }
    return result;
}

int main(void){
    for(int i = 0;i <= 10;i++){
        printf("5 ^ %d == %d\n",i,power(5,i));
    }
}