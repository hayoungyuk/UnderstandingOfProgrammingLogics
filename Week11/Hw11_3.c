#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int scoreReading(void){
    int score;

    printf("Enter a score : ");
    scanf("%d", &score);

    return score;
}

char gradeDecision(int s1, int s2){
    int average;
    char grade;

    average = (s1+s2) / 2;

    if(average >= 80)
        grade = 'A';
    else if (average >= 50)
        grade = 'B';
    else
        grade = 'F';

    return grade;
}

int main(void){
    int score1 = scoreReading();
    int score2 = scoreReading();

    printf("The grade is %c\n", gradeDecision(score1, score2));
}