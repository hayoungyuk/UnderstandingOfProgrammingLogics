#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int result;
    int num;

    printf("Enter a number : ");
    scanf("%d", &num);
    
    for(int i = 1;i<=9;i++){
        result = num*i;
        printf("%d * %d = %d\n", num, i, result);
    }
}