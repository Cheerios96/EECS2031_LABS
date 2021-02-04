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
    int  i, count = 0;
    float c;
    float dec = 0;
    float resu[SIZE];
    int decimal = 0;
    int div = 1;
    c = getchar();
    while ( c != EOF){
        if (c == '.') {
            decimal = 1; //true num has decimal
        }
        if (c >= 48 && c <= 57 ) {
            if (decimal == 0) {
                dec = dec * 10 + (c - 48);
            }
            else {
                div *= 10;
                dec = dec + ((c - 48)/div);
            }
        }
        if (c == '\n'|| c == ' ') {
            resu[count] = dec;
            count++;
            dec = 0;
            decimal = 0;
            div = 1;
        }

        c = getchar(); // read next
    }
    printf("--------\n");
    for(i=0; i < count; i++) {
        printf("%.4f\t%.4f\n", resu[i], resu[i] * 2);
    }
    return 0;

}
