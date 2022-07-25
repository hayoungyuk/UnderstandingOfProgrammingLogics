#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    char charInNum[80];
    int i;
    int len = 0;
    int result = 0;

    scanf("%s", charInNum);

    for(i=0;charInNum[i] !='\0';i++);
    len = i;

    //printf("%d", len);

    for(len = 0; charInNum[len] != '\0'; len++){
        if(charInNum[len] >= '0' && charInNum[len] <= '9')
            result += charInNum[len] - '0';
            // c - '0' 라는 것은 c 에 해당하는 문자를 숫자로 바꿔주는 역할을 합니다.
            // '0' 은 48번
    }

    printf("%d", result);
}