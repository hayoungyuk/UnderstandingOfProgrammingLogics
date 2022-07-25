#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int sum = 0;
    int n,unit;

    scanf("%d",&n);
    scanf("%d",&unit);
    
    for(int i=1;i<=n;i++){
        sum+=i;

        if(i%unit==0){
            printf("%d ",sum);
            sum=0;
        }
    }
}