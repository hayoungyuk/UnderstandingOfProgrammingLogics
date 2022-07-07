#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int num, i;
    int cube;

    printf("Enter a number : ");
    scanf("%d", &num);

    for(i=1;i<=num;i++){
        cube = i*i*i;
        printf("%d\n", cube);
    }
}