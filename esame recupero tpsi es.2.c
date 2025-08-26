#include<stdio.h>
int somma(int x, int y);

int main() {
    int x = 4;
    int y = 5;
    int z = somma (x,y);
    printf("la somma %d\n", z)

}

int somma(int x, int y){

    int z = x+y;
    return z;
}