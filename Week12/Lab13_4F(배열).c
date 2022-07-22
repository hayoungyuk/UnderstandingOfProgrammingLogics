#define _CRT_SECURE_NO_WARNINGS
#define SIZE 10
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand(time(NULL));

    int arrayA[SIZE];
    int i, j, n;

    for(i=0;i<SIZE;i++){
        arrayA[i] = rand()%100;
    }

    printf("----------before sorting\n");
    for(i=0;i<SIZE;i++){
        printf("%d ", arrayA[i]);
    }

    printf("\n----------after sorting\n");
    for(i=0;i<SIZE;i++){
        for(j=0;j<9-i;j++){
            if(arrayA[j] > arrayA[j+1]){
                n = arrayA[j];
                arrayA[j] = arrayA[j+1];
                arrayA[j+1] = n;
            }
        }
    }

    for(i=0;i<SIZE;i++){
        printf("%d ", arrayA[i]);
    }
}