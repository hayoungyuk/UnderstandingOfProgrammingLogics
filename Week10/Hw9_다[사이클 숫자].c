#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_cycle_number(int n){
    int length = 1;

    while(n != 1){
        printf("%d ", n);

        if(n % 2 == 0)
            n = n / 2;
        else if(n % 2 == 1)
            n = n*3+1;
        length++;
    }
    printf("1\n"); //****1처리?
    printf("The length is %d\n", length);
}
int main(void){
    int num;

    printf("Enter a number : ");
    scanf("%d", &num);

    get_cycle_number(num);
}