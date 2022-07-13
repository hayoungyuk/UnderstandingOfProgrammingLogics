#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int i, j, k, num;

    printf("Enter a num : ");
    scanf("%d", &num);
    
    for(i = 1; i <= num; i++){ //여기가 key 포인트 : 행은 1씩 증가 시키면서 1행 , 2행 , 3행 ... 이렇게 증가하고
        for(k = 1; k <= i; k++){
            printf(" ");
        } // 공백문자를 찍고
        for(j = 1; j < num-i+2; j++){ //여기도 key 포인트 : 별은 공백을 찍고 나서 나머지 부분에 채우는 거니까 전체 한 행에 들어가는 별의 갯수에 마이너스 공백을 찍은 갯수를 하면 된다. 
            printf("*");
        } // 별을 찍는다
        printf("\n");
    }
}