#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    char upper_letter;

    printf("Enter an upper letter(A-Y) : ");
    scanf("%c", &upper_letter);

    printf("Character given is %c(%d)\n", upper_letter, upper_letter);
    printf("The next character is %c(%d)\n", upper_letter+1, upper_letter+1);
    printf("The lower case letter is %c(%d)\n", upper_letter+32, upper_letter+32);
}