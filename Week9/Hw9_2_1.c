#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int score;
    int total = 0;
    int std = 0;
    double avg ;
    int max = -1;

    while(score != -1){
        total += score;

        printf("Enter a score (-1 for exit) : ");
        scanf("%d", &score);

        if(max < score){
            max = score;
        }
        if(score > 0){
            std++;
        }
    }
    printf("You've entered %d students.\n", std);
    
    if(std > 0){
        printf("The total is %d\n", total);
        avg = (double)total / std;
        printf("The average is %.1f\n", avg);
        printf("The best score is %d.\n", max);
    }
    else{
        printf("There is no data.\n");
    }
}