#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int i = 1;
    int n;
    int prime_number = 2;

    while(i <= 10){
        for(n = 2; n < prime_number; n++){
            if(prime_number % n ==0)
                break;
        }

        if(n == prime_number){
            printf("%dth prime number is %d\n", i, prime_number);
            i++;
        }
        
        prime_number++;
    }
}