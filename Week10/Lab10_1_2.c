#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print5Chars(char ch){
    for(int i = 1;i <= 5; i++)
        printf("%c", ch);
    printf("\n");
}

int main(void){
    print5Chars('*'); // ""으로 묶으면 오류.
    print5Chars('+'); // ""으로 묶으면 오류.
    print5Chars('1'); // ""으로 묶으면 오류.
}