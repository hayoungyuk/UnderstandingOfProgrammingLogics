#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int num;
    int new_num;
    int digit;
    int digit_count = 0;

    scanf("%d", &num);
    scanf("%d", &digit);

    new_num = num * 3;

    while(new_num != 0){ // new_num 이 0이 될 때까지로..
        if(new_num % 10 == digit){ 
            digit_count++;
        }
        new_num = new_num / 10;
    }

    printf("%d\n", digit_count);
}

/*
digit을 print하는 게 아니라 입력하는 것이다..ㅠ

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int num;
    int new_num;
    int digit = 1;
    int digit_count = 1;
    int cutter = 10;

    scanf("%d", &num);

    new_num = num * 3;
    while(new_num / 10 > 0){
        if(new_num / 10 > 0){
            //printf("%d ", digit);
            if((new_num % cutter) == (new_num / cutter % cutter)){
                cutter * 10;
                printf("%d ",cutter);
                
            }
            digit++;
        }
        if(new_num % 10 == digit){ 
            digit_count++;
        }
        new_num = new_num / 10;
    }

    printf("%d\n", digit);
    printf("%d\n", digit_count);
}*/
