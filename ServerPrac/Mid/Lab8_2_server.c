#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int num;
    int input;
    int MAX = -1, MIN =999;
    scanf("%d",&num);

    if(num != 0){
        for(int i=1;i<=num;i++){
            scanf("%d", &input);

            if(MAX < input)
                MAX = input;
            if (MIN >input)
                MIN = input;
        }
        printf("%d\n",MAX);
        printf("%d\n",MIN);
    }
    else if(num == 0)
        printf("no data.\n");
}