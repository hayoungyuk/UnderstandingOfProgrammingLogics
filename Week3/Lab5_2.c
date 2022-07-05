#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    char alpha;
    int ascii;

    printf("Enter an alphabet : ");
    scanf("%c", &alpha);
    printf("%c %d\n", alpha, alpha);

    printf("Enter a ascii value: ");
    scanf("%d", &ascii);
    printf("%d %c\n", ascii, ascii);
}