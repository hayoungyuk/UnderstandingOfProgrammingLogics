#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int totalSeconds = 14000;
    int hour,minute,second;

    hour = totalSeconds / 3600;
    minute = totalSeconds / 60 % 60;
    second = totalSeconds % 60;

    printf("%d seconds:\n", totalSeconds);
    printf("%dh %dm %ds\n", hour, minute, second);
}