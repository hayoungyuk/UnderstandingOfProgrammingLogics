#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int num, scores;
    int max = -1;
    int min = 999;

    scanf("%d", &num);
    
    if(num != 0){
        for(int i = 1; i<=num;i++){
            scanf("%d", &scores);

            if(max < scores)
                max = scores;
            if(min > scores)
                min = scores;
        }

        printf("%d\n", max);
        printf("%d\n", min);
    }

    if(num == 0)
        printf("no data.");
}