#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int answer;
    int num;
    int my_answer;
    int count = 0;

    printf("Which number of DAN you want to practice ? : ");
    scanf("%d", &num);
    
    for(int i = 1;i<=9;i++){
        answer = num*i;

        printf("%d * %d = ", num, i);
        scanf("%d", &my_answer);

        if(my_answer == answer)
            count++;
    }

    printf("%d DAN GUGUDAN you got %d scores.\n", num, count);
}