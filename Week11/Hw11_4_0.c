#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int num, i;

    printf("Enter a number : ");
    scanf("%d", &num);

    for(i = 2; i < num; i++){
        if(num % i == 0){
            printf("NOT A PRIME NUMBER\n");
            break;
        }
    }
    if(i == num)
        printf("PRIME NUMBER\n");
}