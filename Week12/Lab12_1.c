#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int num;
    int i;
    int total = 0;
    int average;
    
    printf("Enter the number of scores(0 < number <= 40) ; ");
    scanf("%d", &num);

    int scores[num];

    for(i=0;i<num;i++){
        printf("Enter a score : ");
        scanf("%d", &scores[i]);
    }
    printf("--------------------------\n");

    for(i=0;i<num;i++){
        total += scores[i];
    }
    average = total/num;
    
    printf("Total : %d\n", total);
    printf("Average : %d\n", average);

    for(i=0;i<num;i++){
        printf("%d ", scores[i]);
    }
}

/* #3
int main(void){
    int scores[5];
    int i;
    int total = 0;
    int average;

    for(i=0;i<5;i++){
        printf("Enter a score : ");
        scanf("%d", &scores[i]);
    }
    printf("-------------\n");

    for(i=0;i<5;i++){
        total += scores[i];
    }
    average = total / 5;

    printf("Total : %d\n", total);
    printf("Average : %d\n", average);

    for(i=0;i<5;i++){
        printf("%d ", scores[i]);
    }
}*/

/* #2
int main(void){
    int scores[5] = {71,80,90,85,95};
    int i;
    int total = 0, average;

    for(i=0;i<5;i++){
        total += scores[i];
    }
    average = total/5;

    printf("Total : %d\n", total);
    printf("Average : %d\n", average);
}*/

/* #1
int main(void){
    int scores[5];
    scores[0] = 71;
    scores[1] = 80;
    scores[2] = 90;
    scores[3] = 85;
    scores[4] = 95;

    int total = 0;
    int i;

    for(i=0;i<5;i++){
        total += scores[i];
    }

    printf("total : %d\n", total);
    printf("Average : %d\n", total/5);
}*/

