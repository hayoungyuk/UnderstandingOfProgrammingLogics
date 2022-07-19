#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int scoreReading(void){
    int score;

    printf("Enter a score : ");
    scanf("%d", &score);

    return score; // check!
}

char gradeDecision(int s1){
    if(s1 >= 80)
        return 'A';
    else if (s1 >= 50)
        return 'B';
    else
        return 'F';
}

int main(void){
    int score = scoreReading();
    printf("Grade is %c!\n", gradeDecision(score));
}