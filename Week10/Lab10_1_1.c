#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printManyStars(int num){
    for(int i = 1; i <= num; i++){
        printf("*");
    }
    printf("\n");
}

int main(void){
    printManyStars(3);
    printManyStars(4);
    printManyStars(5);
}