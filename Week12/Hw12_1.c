#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int num;
    int i,j;

    printf("Enter the number of scores( <= 20 ) : ");
    scanf("%d", &num);

    int score[num];

    for(i=0;i<num;i++){
        printf("Enter a score : ");
        scanf("%d", &score[i]);
    }

    for(i=0;i<num;i++){
        printf("Student %3d: ", i+1);
        for(j=0;j<score[i];j++){
            printf("*");
        }
        printf("\n");
    }
}