#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int tom_score;
    int mary_score;

    printf("Tom's score? : ");
    scanf("%d", &tom_score);
    printf("Mary's score? : ");
    scanf("%d", &mary_score);

    printf("-----Score Histogram-----\n");

    printf("Tom\t:");
    for(int i = 1; i <= tom_score; i++)
        printf("*");
    printf("<%02d>\n", tom_score); // %02d means 숫자가 2개 미만이면 그 자리는 0으로 채운다.

    printf("Mary\t:");
    for(int i = 1; i <= mary_score; i++)
        printf("*");
    printf("<%02d>\n", mary_score);
}