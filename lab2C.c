/***********************************
 * EECS2031ON - Lab2 *
 * Author: Medeiros, Jacob
 * Email: jacobm0813@gmail.com
 * eecs_username: jacob08
 * York Student #: 217248824
 *********************************/


#include <stdio.h>
#define N 10
int main() {
    int c, x, z, i ;
    int count[N];
    for ( x = 0; x < N; x++) {
        count[x] = 0;
    }
    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9') {
            i = c - 48;
            count[i]++;
        }
    }
    for (z = 0; z < 10; z++) {
        printf("%d: %d\n", z, count[z]);
    }
}