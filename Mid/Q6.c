#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int a ,b;
    int n = 1;

    scanf("%d", &a);
    scanf("%d", &b);

    while (n > 0)
	{
		n *= 10;
		if (b / n == 0)
			break;
	}

    //printf("%d\n", cutter);

    while(a > 0){
        if(a % n == b){ 
            break;
        }
        else
            a = a / 10; // 1234567 
    }

    printf("%d\n", a);
}

/*
//6번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int a ,b;
    int cutter = 10;
    int for_print = 10;

    scanf("%d", &a);
    scanf("%d", &b);

    int i = 10;
    while(b / i > 0){
        if(b / i > 0){
            cutter *= 10;
        }
        b = b / i;
    }

    printf("%d\n", cutter);

    int j = 10;
    while(a / j > 0){
        if(a % cutter == b){ 
            // 12345678 % 100 = 123456.78
            // 1234567 % 100 = 12345.67
            a = a / for_print; // 12345678
            break;
        }
        for_print = for_print * 10; // 100
        a = a / j; // 1234567 
    }

    printf("%d\n", a);
}*/