#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int totalMinute = 130;
    int hour,minute;

    printf("%dminutes : \n",totalMinute);

    hour = totalMinute / 60;
    minute = totalMinute % 60;

    printf("%dh %dm\n",hour,minute);
}