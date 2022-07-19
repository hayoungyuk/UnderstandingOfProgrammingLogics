#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int power(int a, int b){
    int result = 1;
    for(int i=0;i<b;i++){
        result *= a;
    }
    return result;
}

int main(void){
    int x,y;
    printf("Enter the number X : ");
    scanf("%d", &x);
    printf("Enter the number Y :");
    scanf("%d", &y);

    printf("%d ^ %d == %d\n", x, y, power(x, y));
}