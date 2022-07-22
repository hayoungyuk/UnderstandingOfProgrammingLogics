#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int i;
    int income[7];
    int total = 0;
    double average;

    for(i=0;i<7;i++){
        printf("Enter the income of day %d : ", i+1);
        scanf("%d", &income[i]);
    }

    int best_income = income[0];
    int best_day_index = -1;
    
    for(i=0;i<7;i++){
        if(best_income <= income[i]){
            best_income = income[i];
            best_day_index = i+1;
        }
    }

    printf("-----------------------------\n");
    printf("The best income : %d in day %d\n", best_income, best_day_index);
    printf("-----------------------------\n");

    for(i=0;i<7;i++){
        total += income[i];
    }
    average = (double) total / 7;

    printf("The total is %d\n", total);
    printf("The average is %.1f\n", average);

    printf("The good days and their incomes are\n");
    
    for(i=0;i<7;i++){
        if(income[i]>=average){
            printf("day %d : %d\n", i+1, income[i]);
        }
    }
}