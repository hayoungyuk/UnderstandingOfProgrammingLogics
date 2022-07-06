#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    char op;
    int num1, num2;
    int result = 0;

    printf("Enter an operator : ");
    scanf("%c", &op);

    printf("Enter the first operand : ");
    scanf("%d", &num1);
    printf("Enter the second operand : ");
    scanf("%d", &num2);

    switch(op){
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            printf("INVALID OPERATOR");
            break;
    }

    printf("%d %c %d = %d\n", num1, op, num2, result);
}