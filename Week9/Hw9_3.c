#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int i = 1;
    int num;
    int total = 0;

    while(i <= 5){
        printf("Enter the number bigger than zero (%dth) : ", i);
        scanf("%d", &num);

        while(num <= 0){ 
            if(num <= 0){
                printf("WRONG ENTER. Enter the number bigger than zero (%dth) : ", i);
                scanf("%d", &num);
            }
        }

        total += num;
        i++;
    }

    printf("Total is %d.\n", total);
}