#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isPrime(int num){
    int i;
    int flag = 0;

    for(i = 2;i < num; i++){
        if(num % i == 0){
            return printf("NOT prime number.\n");
            break;
        }
    }
    if(num == i)
        return printf("prime number.\n");
}

int main(void){
    int n;

    while(n != -1){
        printf("Enter a number (-1 for exit) : ");
        scanf("%d", &n);

        isPrime(n);
    }    
}