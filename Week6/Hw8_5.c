#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int num, result = 1;

    printf("Enter a number (>=2) : ");
    scanf("%d", &num);

    printf("%d! = ", num);
    for(int i = num; i >= 1; i--){
        result *= i;
        if(i > 1){
            printf("%d", i);
            printf(" * ");
        }
        else{
            printf("%d", i);
            printf(" = %d\n", result);
        }
    }
}