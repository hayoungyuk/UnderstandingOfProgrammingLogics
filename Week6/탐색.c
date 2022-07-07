#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int n, key, nums;
    int search;
    int flag = 0;

    scanf("%d", &n);
    scanf("%d", &key);

    for(int i = 1 ; i <= n;i++){
        scanf("%d", &nums);
        
        if(nums != key){
            flag = 0;
            break;
        }

        if(nums == key){
            flag = 1;
            search = i;
            break;
        }
    }
    if(flag == 0)
        printf("NOT FOUND.\n");
    else
        printf("%d\n", search);
}