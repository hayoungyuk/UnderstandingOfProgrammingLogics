#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int num;
    int i, j;

    printf("Enter a number : ");
    scanf("%d", &num);

    for(j = num; j >= 1; j--){
        for(i = 1; i <= j ; i++){
            printf("*"); // key point : 줄어드는 j
        }    
        printf("\n");
    }
}