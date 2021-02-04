/***********************************
 * EECS2031ON - Lab2 *
 * Author: Medeiros, Jacob
 * Email: jacobm0813@gmail.com
 * eecs_username: jacob08
 * York Student #: 217248824
 *********************************/


#include <stdio.h>

int isDigit(char c);
int isLetter(char z);
int main() {
    char x;
    int num = 0;
    while (1) {
        printf("Enter an integer and a character separated by blank: ");
        scanf("%d %c", &num, &x);
        if (num == -10000) {
            break;
        }
        if (isDigit(x)) {
            int sum = (x - '0') + num;
            printf("Character '%c' represents a digit. Sum of %d and %c is %d\n\n", x, num, x, sum);
        } else if (isLetter(x)) {
            printf("Character '%c' represent a letter\n\n", x);
        } else {
            printf("Character '%c' represents others\n\n", x);
        }
    }
    return 0;
}

int isDigit(char c) {
    if (c >= '0' && c <= '9') {
        return 1;
    }
    return 0;
}
int isLetter (char z) {
    if ( (z >= 65 && z <= 90) || ( z>= 97 && z <= 122)) {
        return 1;
    }
    return 0;
}