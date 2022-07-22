#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int incomes[12] = {11,22,33,44,55,66,11,22,33,44,55,66};
    int search_income;
    int i;
    int search_income_index = -1;
    int got_it = 0;

    printf("SEARCH INCOME ? : ");
    scanf("%d", &search_income);

    for(i=0;i<12;i++){
        if(incomes[i] == search_income){
            search_income_index = i+1;
            got_it = 1;
            break;
        }
        if(incomes[i] != search_income){
            got_it = 0;
        }
    }

    if(got_it == 1)
        printf("The first month is %d that have %d income.\n", search_income_index, search_income);
    else
        printf("There is no month that have income %d\n", search_income);
}