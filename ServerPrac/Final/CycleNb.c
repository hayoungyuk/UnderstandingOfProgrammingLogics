#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int get_cycle_number(int num){
    int len = 1;

    while(num != 1){
        printf("%d ", num);

        if(num % 2 == 0){
            num = num / 2;
            len++;
        }
        else if(num % 2 != 0){
            num = num * 3 + 1;
            len++;
        }
    }
    printf("%d\n",1);
    
    return len;
}

int main(void){
    int n;

    scanf("%d", &n);
    printf("%d\n", get_cycle_number(n));
}