#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    char grade;
    int bad_score, good_score;

    printf("Enter a student score(A or F) : ");
    scanf("%c", &grade);

    if(grade == 'A'){
        printf("Enter your GOOD score : ");
        scanf("%d", &good_score);

        printf("Congratulations! %d score get good grade.\n", good_score);
    }
    if (grade == 'F'){
        printf("Enter your BAD score : ");
        scanf("%d", &bad_score);        
        
        printf("%d ? you must need more effort.\n", bad_score);
    }

}