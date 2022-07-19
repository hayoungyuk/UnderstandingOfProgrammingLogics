#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int numInNum(int a, int b){
    int n = 1;

    while (n > 0){
		n *= 10;
		if (b / n == 0)
			break;
	}

    while(a > 0){
        if(a % n == b) 
            break;
        else
            a = a / 10;
    }

    return a;
}

int main(void){
    int a ,b;

    scanf("%d", &a);
    scanf("%d", &b);

    printf("%d\n", numInNum(a, b));
}