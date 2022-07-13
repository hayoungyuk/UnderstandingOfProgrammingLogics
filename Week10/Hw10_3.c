#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printPersonalScoreStars(int personal_score){
    for(int i = 1; i <= personal_score; i++)
        printf("*");
    printf("<%02d>\n", personal_score);
}

void printScoreHisto(void){
    printf("-----Score Histogram-----\n");
} 

int main(void){
    int tom_score;
    int mary_score;

    printf("Tom's Score ? ");
    scanf("%d", &tom_score);
    printf("Mary's Score ? ");
    scanf("%d", &mary_score);

    printScoreHisto();

    printf("Tom\t:");
    printPersonalScoreStars(tom_score);
    printf("Mary\t:");
    printPersonalScoreStars(mary_score);
}