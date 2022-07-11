#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int height;
    char answer;
    int weight;

    do{
        printf("Enter your height : ");
        scanf("%d", &height);

        weight = height - 110;
        printf("Your ideal weight is %d.\n", weight);

        while (getchar() != '\n'); //함수가 버퍼의 '\n'을 반환할 때까지 반복한다. 
        printf("DO YOU WANT TO CONTINUE?(y/n) : ");
        scanf("%c", &answer);
    }while(answer == 'y');
}