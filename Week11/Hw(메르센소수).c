#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long long twoToThePower(int n){
    int i;
    long long result = 1;
    for(i = 0 ; i < n; i++){
        result *= 2;
    }
    return result - 1;
}

int isPrime(int x){
    int i;
    for(i = 2; i< x;i++){
        if(x % i == 0){
            break;
        }
    }
    if(x == i)
        return 1;
    else 
        return 0;
}

int main(void){
    int num, i;

    printf("Enter a number : ");
    scanf("%d", &num);

    for(i = 2; i< num; i++)
        if( isPrime(twoToThePower(i)) == 1 )
            printf("(%d ^ %d - 1) == %lld is Mersenne prime\n",2, i, twoToThePower(i));
}