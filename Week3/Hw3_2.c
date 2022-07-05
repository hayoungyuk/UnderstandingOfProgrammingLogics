#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int totalSecond;
    int hour, minute, second;

    printf("Enter the total seconds : ");
    scanf("%d", &totalSecond);

    printf("----CALCULATION RESULT----\n");
    printf("%d seconds\n", totalSecond);
    
    hour = totalSecond / 3600;
    minute = totalSecond % 3600 / 60;
    second = totalSecond % 3600 % 60;

    printf("%dh %dm %ds\n", hour, minute, second);
}