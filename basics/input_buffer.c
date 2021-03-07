/* 
 * To demonstrate input buffer of terminal.
 */
 
#include <stdio.h>
 
int main(void) {
    int i = 3;
    char character;
    //A program to input a character and display it, three times.
    //
    //This program should theoretically ask for input 3 times, but
    // in practise it does so only 2 times. Why?
    while(i--){
        printf(":(input)");
        scanf("%c", &character);
        printf("(output)%c\n", character);
    }
    return 0; 
}