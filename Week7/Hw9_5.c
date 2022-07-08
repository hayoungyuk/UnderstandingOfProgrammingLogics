#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main (void){
    int num;
    int k = 0;

    printf("Enter a number : ");
    scanf("%d", &num); //256

    while(num != 0){ //256
        if(num / 2 > 0){ //256/2가 0보다 크면
            k++; //k_count up
        }
        num = num / 2; //나눠서 넘겨주기
    }
    printf("%d", k); // k출력.
}