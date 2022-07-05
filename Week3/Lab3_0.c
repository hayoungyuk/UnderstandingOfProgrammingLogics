#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

int main (void) { 
    int x = 10, y = 20; 
    int result1, result2, result3; 
    
    printf("x+y : %d \n", x + y); 
    
    x += 3; 
    y *= 4; 
    printf("result : %d %d\n", x, y); 

    x = -x; 
    printf("x=-x after x is %d \n", x); 
    
    x = 10; 
    y = 10; 
    printf("first operate after add : %d \n", x++); 
    printf("print again : %d \n\n", x); 
    printf("first add after operate : %d \n", ++y); 
    printf("print again : %d \n", y); 
    
    x = 10; 
    y = (x--) + 2; 
    printf("x : %d \n", x); 
    printf("y : %d \n", y); 

    x = 10, y = 10; 
    result1 = (x == y); 
    result2 = (x <= y); 
    result3 = (x > y); 
    printf("result1 : %d \n", result1); 
    printf("result2 : %d \n", result2); 
    printf("result3 : %d \n", result3); 
    
    x = 10; 
    y = 20; 
    result1 = (x == 10 && y == 10); 
    result2 = (x == 10 || y == 10); 
    result3 = !(x == 10); 
    printf("result1 : %d \n", result1); 
    printf("result2 : %d \n", result2); 
    printf("result3 : %d \n", result3); 
    
    return 0; 
} 