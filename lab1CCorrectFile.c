#include <stdio.h>

void greet(int a);

float sum(float x, float y);

int main()
{
    int a = 2031;
    greet(a);
    float x =2.2, y=3.3;
    float su= sum(x,y);
    printf( "%f + %f = %f\n", x,y, su);

    return 0;

}

float sum(float i, float j) {
    return i + j;
}

/* function definition */


void greet(int i){
    printf("Hello %d!\n", i);
}