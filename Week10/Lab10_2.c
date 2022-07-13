#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void findNPrintBig (int n1, int n2){
    int big;

    if(n1 >= n2)
        big = n1;
    else 
        big = n2;
        
    printf("The big number is %d\n", big);
}
int main(void){
    int num1, num2;

    scanf("%d %d", &num1, &num2);
    findNPrintBig(num1, num2);
}