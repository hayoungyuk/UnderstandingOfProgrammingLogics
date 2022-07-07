#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int num;
    long long result = 1;

    printf("Enter a number : ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++){
        result *= i;
    
        printf("%d! = %lld\n", i, result);
    }
}