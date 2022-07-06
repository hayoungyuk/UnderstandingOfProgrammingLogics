#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int num;
    int i = 1;
    int result = 1;

    printf("Enter a number : ");
    scanf("%d", &num);

    while (i <= num){
        result *= i;
        i++;
    }
    printf("%d's factorial result is %d\n", num, result);
}