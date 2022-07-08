#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int num;
    int count = 0;

    scanf("%d", &num);

    while(num > 0){
        if(num > 0){
            count++;
        }
        num = num/10;
    }

    printf("%d", count);
}