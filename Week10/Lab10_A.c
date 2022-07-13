#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print5Stars(void){
    //printf("*****\n");
    int i;
    for(i = 1; i <= 5; i++)
        printf("*");
    printf("\n");
}

int main(void){
    int i;

    for(i = 1; i <= 3 ;i++)
        print5Stars();
}