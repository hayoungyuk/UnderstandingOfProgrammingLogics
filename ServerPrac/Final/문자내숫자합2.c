#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int addNumbers(char s[]){
    int i;
    int result;

    //for(i = 0; s[i] != '\0'; i++);
    //printf("%d\n", i);
    for(i = 0; s[i] != '\0'; i++){
        if(s[i] >= '0' && s[i] <= '9')
            result += s[i] -'0';
    }

    return result;
}

int main(void){
    char word[81];
    int i;
    //printf("Enter one word: ");
    
    scanf("%s", word);
    printf("%d\n", addNumbers(word));
    
    return 0;
}