#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int num;
    int i = 1;
    int add_result = 0;
    int mul_result = 1;

    printf("Enter a number : ");
    scanf("%d", &num);

    while(i <= num){
        add_result += 3;
        mul_result *= 3;
        
        i++;
    }

    printf("3 add %d times = %d\n", num, add_result);
    printf("3 multiple %d times = %d\n", num, mul_result);
}