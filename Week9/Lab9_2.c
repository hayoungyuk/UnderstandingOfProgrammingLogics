#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    char play_again_button;

    int my_answer;
    int real_answer;

    do{
        srand(time(NULL));
        int num1 = rand()%100;
        int num2 = rand()%100;
        //반복하고자 하는 반복문 안에 내가 사용하는 rand 변수가 있다면
        //그 안에 넣어주어야 한다.
        //만약에 그 안에 넣어주지 않는다면, 계속 똑같은 난수가 발생한다.
        
        printf("%d + %d = ", num1, num2);
        scanf("%d", &my_answer);

        real_answer = num1+num2;

        if(real_answer == my_answer){
            printf("YOUR ANSWER IS RIGHT.\n");
        }
        if(real_answer != my_answer){
            printf("YOUR ANSWER IS WRONG.\n");
            printf("%d is the right answer.\n", real_answer);
        }

        while(getchar()!='\n');
        printf("Do your want to play again?(y/n) : ");
        scanf("%c", &play_again_button);

    }while(play_again_button == 'y');
}