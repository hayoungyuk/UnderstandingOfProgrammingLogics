#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int base, height;
    int area;

    printf("Enter base and height : ");
    scanf("%d %d", &base , &height);

    area = base * height / 2;

    printf("base(%d) and height(%d) of triangle area is %d\n", base, height, area);
}