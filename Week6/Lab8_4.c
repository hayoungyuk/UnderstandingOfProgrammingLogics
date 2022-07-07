#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int score;
    int MAX = -1;

    for(int i = 1;i<=5;i++){
        printf("Enter a score : ");
        scanf("%d", &score);

        if(MAX < score)
            MAX = score;
    }
    printf("The best score is %d.\n", MAX);    
}