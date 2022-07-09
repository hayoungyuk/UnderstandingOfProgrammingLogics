#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int x, y;
    int nums;
    int count = 0;
    int sum = 0;

    scanf("%d %d", &x, &y);

    for(int i = 1; i <= 10; i++){
        scanf("%d", &nums);

        if(nums > x && nums < y){
            sum += nums;
            count++;
        }
    }

    printf("%d\n%d\n", sum, count);
}