#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    /*
    for(int i = 1; i<=9; i++){
        for(int j =2 ;j<=8; j+=2)
            printf("%d * %d = %d\t", i, j, i*j);
        printf("\n");
    }*/
    int i = 1;
    while(i<=9){
        int j = 2;
        while(j<=8){
            printf("%d * %d = %d\t", i, j, i*j);
            j+=2;
        }
        printf("\n");
        i++;
    }
}