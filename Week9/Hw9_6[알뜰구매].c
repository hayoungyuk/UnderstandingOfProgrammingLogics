#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int money;
    int bread = 500, cookie = 700 , coke = 400;
    int i,j,k;

    printf("Enter the total money you have. : ");
    scanf("%d", &money);

    for(i = bread; i <= money; i += bread){
        for(j = cookie; j <= money; j += cookie){
            for(k = coke; k <= money; k += coke){
                if(i + j + k == money){
                    printf("Bread : %d | Cookie : %d | Coke : %d\n", i / bread, j / cookie , k / coke);
                }
                if(i + j + k > money)
                    break;
            }
        }
    }
}