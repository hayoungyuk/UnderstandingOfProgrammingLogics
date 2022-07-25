#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int n,key;
    int i, inputNum;
    int flag = 0;

    scanf("%d", &n);
    scanf("%d", &key);
    
    for(i=1;i<=n;i++){
        scanf("%d", &inputNum);

        if(inputNum == key){
            flag = 1;
            break;
        }
    }
    if(flag == 1)
        printf("%d", i);
    if(flag == 0)
        printf("not found.\n");
}