#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int sum = 0;

    for (int i = 1; i<=30 ; i++){
        sum += i;
        
        if(i% 5 == 0){
            printf("%d ~ %d sum = %d\n", i-4, i, sum);
            sum = 0;
        }
    }
}