#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int midterm,final,average;

    printf("\n---------------------------------\n");
    printf("name\tmidterm\tfinal\taverage\n");
    printf("---------------------------------\n");

    midterm = 100;
    final = 90;
    average = (midterm+final)/2;
    
    printf("Kim\t%d\t%d\t%d\n",midterm,final,average);
}