#define _CRT_SECURE_NO_WARNINGS
#define SIZE 10
#include <stdio.h>

int main(void){
    int odd[SIZE];
    int even[SIZE];
    int num;
    int i, oddIndex = 0, evenIndex = 0;

    for(i = 0; i < SIZE; i++){
        printf("Enter a number : ");
        scanf("%d", &num);
    
        if(num % 2 == 0){
            even[evenIndex] = num;
            evenIndex++;
        }
        else if(num %2 != 0){
            odd[oddIndex] = num;
            oddIndex++;
        }
    }
    printf("--------------\n");

    printf("Print Odd Numbers : ");
    for(i=0 ; i < oddIndex ; i++){
        printf("%d ", odd[i]);
    }
    printf("\n");

    printf("Print Even Numbers : ");
    for(i=0 ; i < evenIndex ; i++){
        printf("%d ", even[i]);
    }
}