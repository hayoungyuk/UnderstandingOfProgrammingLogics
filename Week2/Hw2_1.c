#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int midterm = 100, final = 90;

    printf("NAME\tmidterm\tfinal\taverage\n");
    printf("HAYOUNG\t%d\t%d\t%d\n",midterm,final,(midterm+final)/2);
}