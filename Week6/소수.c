#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int m , n;
    int sum = 0;
    int i;

    //printf("Enter a number :");
    scanf("%d %d", &m, &n);

    while(m <= n){ // m ~ n 까지 진행하는데
        i = 2;

        while(i < m){ // 소수를 구하기 위해서 i라는 변수에 이제 나누기를 진행한다.
            if(m % i==0){ // 만약 m이랑 증가하는 i랑 나눴는데 나눠떨어져
                break; // 그럼 break. break문을 만나면 가장 가까운 반복문인 i로 돌아간다.
            }
            i++;
        }

        if(m == i){ // 만약 m이랑 i랑 같아..
            //printf("%d\n", m);
            sum += m;
        }
        /*else{
            printf("%d\n", m);
        }*/
        m++;
    }
    printf("%d", sum);
}

/*for 문으로 작성하면..
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int m , n;
    int sum = 0;
    int i;

    //printf("Enter a number :");
    scanf("%d %d", &m, &n);

    for( ; m<=n ; m++){ // m ~ n 까지 진행하는데
        for(i = 2; i< m ;i++){ // 소수를 구하기 위해서 i라는 변수에 이제 나누기를 진행한다.
            if(m % i==0){ // 만약 m이랑 증가하는 i랑 나눴는데 나눠떨어져
                break; // 그럼 break. break문을 만나면 가장 가까운 반복문인 i로 돌아간다.
            }
        }

        if(m == i){ // 만약 m이랑 i랑 같아..
            //printf("%d\n", m);
            sum += m;
        }
    }
    printf("%d", sum);
}
*/