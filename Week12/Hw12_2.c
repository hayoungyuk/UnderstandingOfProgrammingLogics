#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand(time(NULL));

    int num;
    int i;
    int total=0;
    int average;

    printf("Enter the number of random numbers ( <= 100 ) : ");
    scanf("%d", &num);

    int rand_nums[num];
    for(i=0;i<num;i++){
        rand_nums[i] = rand()%100;
    }

    for(i=0;i<num;i++){
        total += rand_nums[i];
    }
    average = total/num;
    printf("The average of rand number is %d\n", average);

    printf("The nums are\n");
    for(i=0;i<num;i++){
        printf("%5d",rand_nums[i]);
        if(i%5 == 4)
        printf("\n");
    }
    printf("\n");
}