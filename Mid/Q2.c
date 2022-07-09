#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    double score;

    scanf("%lf", &score);

    if(score >= 100)
        score = score * 1.5;
    else if(score >= 50)
        score = score * 1.25;
    else if(score >= 10)
        score = score * 1.15;
    else
        score = score * 1.0;
    
    printf("%.2f", score);
}