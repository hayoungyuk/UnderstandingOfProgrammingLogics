#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    char op;
    int num1, num2;
    int answer = 0;
    int my_answer;

    printf("Enter an operator : ");
    scanf("%c", &op);

    printf("Enter the first operand : ");
    scanf("%d", &num1);
    printf("Enter the second operand : ");
    scanf("%d", &num2);

    printf("%d %c %d = ",num1, op, num2);
    scanf("%d", &my_answer);

    switch(op){
        case '+':
            answer = num1 + num2;
            break;
        case '-':
            answer = num1 - num2;
            break;
        case '*':
            answer = num1 * num2;
            break;
        case '/':
            answer = num1 / num2;
            break;
        default:
            printf("INVALID OPERATOR");
            break;
    }
    if (my_answer == answer)
        printf("RIGHT ANSWER\n");
    else
        printf("WRONG!\n%d is the right answer.\n", answer);
}