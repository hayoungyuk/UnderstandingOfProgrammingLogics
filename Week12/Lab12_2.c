#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand(time(NULL));
    
    int data[10];
    int i;
    int total=0;
    int average;

    for(i=0;i<10;i++){
        data[i] = rand()%100;
    }
    
    for(i=0;i<10;i++){
        total += data[i];
    }
    average = total/10;
    printf("the average is %d\n", average);

    for(i=0;i<10;i++){
        printf("%d ", data[i]);
    }
}