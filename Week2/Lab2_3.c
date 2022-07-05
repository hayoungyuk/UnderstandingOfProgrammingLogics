#define _CRT_SECURE_NO_WARNIGNS
#include <stdio.h>

int main(void){
    int totalMinutes = 200;
    int hour, minute;

    hour = totalMinutes / 60;
    minute = totalMinutes % 60;

    printf("%d minutes:\n", totalMinutes);
    printf("%dh %dm\n", hour, minute);
}