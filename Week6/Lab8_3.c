#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int num, itg;
    int count = 0;

    printf("Enter the number of integers : ");
    scanf("%d", &num);
    
    for(int i=1;i<=num;i++){
        printf("Enter an integer : ");
        scanf("%d", &itg);

        if(itg % 2 ==0)
            count++;
    }
    printf("The number of even numbers is %d.\n", count);
}