#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printManyChars(char ch, int n){
    for(int i = 1; i <= n; i++)
        printf("%c", ch);
    printf("\n");
}

int main(void){
    char ch_to_print;
    int num;

    printf("Enter a character to print : ");
    scanf("%c", &ch_to_print);
    printf("Enter the number of characters : ");
    scanf("%d", &num);

    printManyChars(ch_to_print, num);
}