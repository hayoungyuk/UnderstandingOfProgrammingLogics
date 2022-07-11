#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int num;

    do{
        printf("Enter a number (num>0) : ");
        scanf("%d", &num);

        if(num > 0)
            printf("The enter (num>0) number is %d\n", num);
    }while(num < 0);
}