/************************************
* EECS2031ON - Lab 1*
*Author: Medeiros, Jacob
*Email:	jacobm0813@gmail.com
*eecs_username:	jacob08
*York Student #: 217248824
*************************************/

#include <stdio.h> // define EOF

int main(){
    int c;
    int count = 0;
    int lines = 0;
    c = getchar();
    while(c != EOF) /* no end of file*/
    {
        if ( c != 10 ) {
            count++; //include spaces and '\n'
        }
        if ( c == 10){
            lines++;
        }
            c = getchar(); /* read next */
    }
    printf("# of chars: %d\n",count);
    printf("# of lines : %d\n", lines);
}
