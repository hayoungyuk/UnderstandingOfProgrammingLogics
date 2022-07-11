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

        int num1 = rand() % 100;
        int num2 = rand() % 100;
        int op = rand() % 4; // 0,1,2,3
        
        switch (op){
            case 0:
                op = '+';
                real_answer = num1 + num2;
                break;
            case 1:
                op = '-';
                real_answer = num1 - num2;
                break;
            case 2:
                op = '*';
                real_answer = num1 * num2;
                break;
            case 3:
                op = '/';
                real_answer = num1 / num2;
                break;
            default:
                break;
        }
        printf("%d %c %d = ", num1, op, num2);
        scanf("%d", &my_answer);

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