#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int num, flag = 0;

    printf("Enter a number : ");
    scanf("%d", &num);

    for(int i = 2;i < num; i++){
        if(num % i == 0){
            flag = 0;
            break;
        }
        else{
            flag = 1;
            break;
        }
    }

    if(flag == 0)
        printf("IS NOT PRIME\n");
    if(flag == 1)
        printf("PRIME NUMBER\n");
}