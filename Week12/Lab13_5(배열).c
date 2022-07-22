#define _CRT_SECURE_NO_WARNINGS
#define SIZE 8
#include <stdio.h>

int main(void){
    int num;
    int binary[SIZE];
    int i, count = 0;

    printf("Enter positive number ( < 256 ): ");
    scanf("%d", &num);

    while(num != 0){
        binary[i] = num % 2;

        count++;
        i++;

        num = num / 2;
    }
    
    for(i = 0; i < count; i++){
        printf("%d ", binary[count-1-i]);
    }
}