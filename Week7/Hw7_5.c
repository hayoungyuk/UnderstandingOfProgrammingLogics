#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int num;

    printf("Enter a number : ");
    scanf("%d", &num); //8

    while(num > 0){  // num이 0 보다 클때까지
        printf("%d ", num%2); // num%2를 한 결과를 출력 (나머지를 출력)
        num = num/2; // num을 다시 나누고 넘겨주기.
    }
}