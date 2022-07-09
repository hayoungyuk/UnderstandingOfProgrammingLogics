#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int month;
    int total_date;

    scanf("%d", &month);

    switch(month){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            total_date = 31;
            break;
        case 2:
            total_date = 28;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            total_date = 30;
            break;
        default:
            total_date = -1;
            break;
    }
    
    if(total_date > 0)
        printf("%d", total_date);
    else
        printf("Invalid Month\n");
}