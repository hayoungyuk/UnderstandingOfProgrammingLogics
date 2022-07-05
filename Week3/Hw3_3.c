#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int hour, minute, second;
    int totalSecond;

    printf("Enter h m s : ");
    scanf("%d %d %d", &hour , &minute , &second);

    totalSecond = hour * 3600 + minute * 60 + second;

    printf("----CALCULATION RESULT----\n");
    printf("Total %d seconds\n", totalSecond);
}