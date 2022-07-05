#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int base, height, width;
    int area, circum;

    printf("Enter base and height : ");
    scanf("%d %d", &base , &height);

    area = base * height / 2;
    printf("base(%d) and height(%d) of triangle area is %d\n", base, height, area);

    printf("Enter width and height : ");
    scanf("%d %d", &width, &height);

    circum = (width + height) * 2;
    area = width * height;
    printf("width(%d) and height(%d) of circum is %d and area is %d\n", width, height, circum, area);
}