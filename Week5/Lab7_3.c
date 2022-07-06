#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int i = 1;
    int num;
    int result = 1;

    printf("Enter a number : ");
    scanf("%d", &num);
    
    while(i<=num){
        result = i*i*i;
        printf("%d\n", result);  

        i++;
    } 
}