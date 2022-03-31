#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int totalSecond = 14000;
    int hour,minute,second;

    hour = totalSecond /3600;
    minute = totalSecond % 3600 /60;
    second = totalSecond % 60;

    printf("%d seconds : \n", totalSecond);
    printf("%dh %dm %ds\n",hour,minute,second);
}