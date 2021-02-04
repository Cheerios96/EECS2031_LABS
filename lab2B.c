/***********************************
 * EECS2031ON - Lab2 *
 * Author: Medeiros, Jacob
 * Email: jacobm0813@gmail.com
 * eecs_username: jacob08
 * York Student #: 217248824
 *********************************/


#include <stdio.h>
int main()
{
    int c;
    while ((c = getchar()) != EOF) {
        if ( c >= 97 && c <= 122) {
            c -= 32;
        }
        putchar(c);
    }
}