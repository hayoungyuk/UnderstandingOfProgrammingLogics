#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int n, m;
    int j;
    int sum = 0;

    scanf("%d", &n);   
    scanf("%d", &m);
    
    int i = 1;
    while(i <= m) {
        int j = 2;
        while(j <= n){
            if(n % j == 0){
                break;
            }
            j++;
        }
        if(n == j){
            //printf("%d ", n);
            sum += n;
            i++;
        }
        n++;
    }

    printf("%d", sum);
}