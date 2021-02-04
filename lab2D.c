/***********************************
 * EECS2031ON - Lab2 *
 * Author: Medeiros, Jacob
 * Email: jacobm0813@gmail.com
 * eecs_username: jacob08
 * York Student #: 217248824
 *********************************/
#include <stdio.h>
#define SIZE 50    // assume no more than 50 literals in input
int main(){
    int c, i, count = 0;
    int value = 0;
    int resu[SIZE];
    int negative = 0;

    c = getchar();
    while ( c != EOF){
        if (c == '-') {
            negative = -1;
        }
         if (c >= '0' && c <= '9' ) {
            value = value * 10 + (c - 48);
        }
         if (c == '\n'|| c == ' ') {
             negative = 1;
             resu[count] = value * negative;
             count++;
            value = 0;
        }

        c = getchar(); // read next
    }
    printf("--------\n");
    for(i=0; i < count; i++) {
        printf("%d\t%d\n", resu[i], resu[i] * 2);
    }
    return 0;

}