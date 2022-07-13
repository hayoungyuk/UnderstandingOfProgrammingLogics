#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int num;
    int n = 0;

    printf("Enter a number : ");
    scanf("%d", &num);

    for(int i = 1; i<=num; i += 2){
        for(int k = 1; k <= n; k++){
            printf(" ");
        }
        n++;
        for(int j = 1; j <= num-i+1; j++){
            printf("*");
        }
        printf("\n");
    }
}
