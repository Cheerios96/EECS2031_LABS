#include <stdio.h>
int loop () {
    int k;
    printf("Enter the number of interactions:");
    scanf("%d", &k);
    return k;

}
void greet(int i){
    printf("Hello %d!\n", i);
}

/* function definition */
float sum (float i, float j){
    return i+j;
}

int main()
{
    int a = 2031;
    int g;
    greet(a);
    int u = loop();
    float x, y;
    for (g = 0; g < u; ++g) {
        printf("Enter two float numbers separated by ##:");
        scanf("%f##%f", &x, &y);
        float su = sum(x,y);
        printf( "%.3f + %.3f = %f (%.2f)\n", x, y, su, su);
    }
    return 0;

}



