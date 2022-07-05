#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    char gender;
    int age;
    float height;

    printf("Enter your gender : ");
    scanf("%c", &gender);
    printf("Enter your age : ");
    scanf("%d", &age);
    printf("Enter your height : ");
    scanf("%f", &height);

    printf("GENDER\tAGE\tHEIGHT\n");
    printf("%c\t%d\t%f\n", gender, age, height);
}