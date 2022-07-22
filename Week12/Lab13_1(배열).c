#define _CRT_SECURE_NO_WARNINGS
#define SIZE 5
#include <stdio.h>

int main(void){
    int arrayA[SIZE] = {1,2,3,4,1};
    int arrayB[SIZE];
    int arrayC[SIZE];
    int i;
    int same = 1;

    for(i=0;i<SIZE;i++){
        arrayB[i] = arrayA[i];
        arrayC[SIZE- 1- i] = arrayA[i];
    }

    /*print array A,B,C*/
    printf("ArrayA : "); 
    for(i=0;i<SIZE;i++){
        printf("%d ", arrayA[i]);
    }
    printf("\n");

    printf("ArrayB : "); 
    for(i=0;i<SIZE;i++){
        printf("%d ", arrayB[i]);
    }
    printf("\n");
    
    printf("ArrayC : "); 
    for(i=0;i<SIZE;i++){
        printf("%d ", arrayC[i]);
    }
    printf("\n");

    /*judge same or not same - A and B*/
    for(i=0;i<SIZE;i++){
        if(arrayA[i] != arrayB[i]){
            same = 0;
            break;
        }
    }

    if(same == 1)
        printf("ArrayA and ArrayB is SAME\n");
    else
        printf("ArrayA and ArrayB is NOT SAME\n");

    /*judge same or not same - A and C*/
    for(i=0;i<SIZE;i++){
        if(arrayA[i] != arrayC[i]){
            same = 0;
            break;
        }
    }

    if(same == 1)
        printf("ArrayA and ArrayC is SAME\n");
    else
        printf("ArrayA and ArrayC is NOT SAME\n");
}