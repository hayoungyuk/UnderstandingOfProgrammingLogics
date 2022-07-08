#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int n, key;
    int nums;
    int loc;
    int flag = 0;

    scanf("%d", &n);
    scanf("%d", &key);

    for(int i = 1;i<=n;i++){
        scanf("%d", &nums);

        if(nums == key){
            flag = 1;
            loc = i;
            break; 
            // 왜냐면 nums에 key값이 여러개 있어도 맨 첫번째 num 위치를 출력해야하기 떄문
        }

        if(nums != key){
            flag = 0;
            //break; 여기에 break문을 넣으면 틀린다.
            //왜?
            // 왜냐면 숫자들이 돌다가 같은 수가 없으면 바로 break문을 만나 첫번째 반복문을 빠져나가 바로 flag의 진위여부를 묻기때문.
            // 즉, 만약 tc1처럼 썼다면 (5 \n 15 \n 10 20 30 15 40)
            // 바로 첫번쨰인 15와 10 틀린 비교를 만나게 된다.
            // 그러면 바로 break를 만나 탈출하게 됨.
            // break문을 쓰는 것은 좋지만 용도에 맞게 알맞게 쓰도록 하자. 생각을 한 번 더 하자.
        }
    }

    if(flag == 1){
        printf("%d", loc);
    }
    else{
        printf("NOT FOUND\n");
    }
}