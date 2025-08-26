#include<stdio.h>
#define SOMMA_MACRO(x , y) (x+y)

int main(void) {
    int x =4;
    int y=5;
    int num1, num2;
    num1 = SOMMA_MACRO(x,y);
    printf("la somma x,y %d\n", num1);
}