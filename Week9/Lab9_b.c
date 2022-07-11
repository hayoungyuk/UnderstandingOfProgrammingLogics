#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand(time(NULL));

    int num1 = rand()%100;
    int num2 = rand()%100;
    int my_answer;
    int real_answer;

    printf("%d + %d = ", num1, num2);
    scanf("%d", &my_answer);

    real_answer = num1+num2;

    if(real_answer == my_answer){
        printf("YOUR ANSWER IS RIGHT.\n");
    }
    else{
        printf("YOUR ANSWER IS WRONG.\n%d is the right answer.\n", real_answer);
    }
}