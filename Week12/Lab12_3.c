#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int i;
    int incomes[7];

    for(i=0;i<7;i++){
        printf("Enter the income : ");
        scanf("%d", &incomes[i]);
    }
    printf("----------------------\n");

    int best_income = incomes[0];
    for(i=0;i<7;i++){
        if(best_income < incomes[i])
            best_income = incomes[i];
    }
    printf("The best income is %d\n", best_income);

    printf("incomes are\n");
    for(i=0;i<7;i++){
        printf("%d ", incomes[i]);
    }
}