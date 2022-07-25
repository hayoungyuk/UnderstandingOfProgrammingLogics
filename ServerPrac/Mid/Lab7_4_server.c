#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int num;

    scanf("%d", &num);

    int i = 1;
    while(i<=num){
        if(i%3==0 || i%5==0)
            printf("%d ", i);
        i++;
    }
}