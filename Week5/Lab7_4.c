#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int num;
    int i = 1;

    printf("Enter a number : ");
    scanf("%d", &num);

    while(i <= num){
        if(i % 3 == 0 || i % 5 == 0)
            printf("%d ", i);
        i++;
    }
    printf("\n");
}