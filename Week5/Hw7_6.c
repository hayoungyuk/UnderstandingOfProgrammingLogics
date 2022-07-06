#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int num;
    int i = 1;
    int ones = 0;

    printf("Enter a number : ");
    scanf("%d", &num);

    while(i <= num){
        ones = ones * 10 + 1;
        printf("%d\n", ones);
        
        i++;
    }
}