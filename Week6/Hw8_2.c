#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int score, num;
    int MAX = -1;
    int MIN = 999;

    printf("Enter the number of scores : ");
    scanf("%d", &num);

    if(num != 0){
        for(int i = 1;i<=num;i++){
            printf("Enter a score : ");
            scanf("%d", &score);

            if(MAX < score)
                MAX = score;
            if(MIN > score)
                MIN = score;
        }
        printf("The best score is %d\n", MAX);
        printf("The worst score is %d\n", MIN);
    }

    if(num == 0){
        printf("NO DATA.\n");
    }    
}