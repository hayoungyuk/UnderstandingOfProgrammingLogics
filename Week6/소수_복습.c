#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int m, n, i;    
    int sum = 0;

    scanf("%d %d", &m, &n);

    for( ; m <= n; m++){ //ⓒ 다시 1번 for문으로 돌아온다. //1
        for(i = 2;i <= n;i++){ //2
            if(m % i ==0){
                break;
            } // ⓐ break문을 만나면 가장 가까운 for문인 2번 for문을 빠져나가서
        }
        
        if(m == i){ // ⓑ 밑의 결과를 수행 (이때 조건에 부합하지 않으면 수행x)
            printf("%d ", m);
            sum += m;
        }
    }
    printf("\n%d", sum);
}