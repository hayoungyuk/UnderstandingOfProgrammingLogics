#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int i = 1, j;
    int prime_number;

    do{
        for(j=2;j<prime_number;j++){
            if(prime_number % j == 0)
                break;
        }

        if(prime_number == j){
            printf("%dth prime is %d\n", i, prime_number);
            i++;
        }
        
        prime_number++;
    }while(i <= 10);
}